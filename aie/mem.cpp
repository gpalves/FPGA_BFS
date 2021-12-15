#include <ap_int.h>
#include <hls_stream.h>
#include <ap_axi_sdata.h>

// Outline:

// Input:
//  Pointers to vector array, row offsets, and column values
//  Max sizes on vector & row offsets
//  2 outgoing streams, 1 incoming stream

// Operation:
//  Build up the vector. (Extract this into sync.cpp)
//      For each item in row offsets, of LSB is 1, insert into vector array
//      If vector array is empty, BFS is done. Break
//  For each row not yet visited:
//      vec_idx, col_idx = 0
//      While true:
//          Pull col window at col_idx, and vec_window at vec_idx
//          Wait for response
//          If response == 1, mark row as done in row offsets
//          If response == 2:
//              If more of vec is available, advance vec
//              Else, break
//          If response == 3:
//              If more of col is available, advance col
//              Else, break
//  After this is done, start over

extern "C"{
void mem(ap_int<32>* vec, ap_int<32>* row, ap_int<32>* val, ap_int<32>* done,
          ap_int<32> row_size, ap_int<32> vec_size,
          hls::stream<qdma_axis<32,0,0,0>> & row_stream,
          hls::stream<qdma_axis<32,0,0,0>> & vec_stream,
          hls::stream<qdma_axis<32,0,0,0>> & output){
    int step = 1;

    #pragma HLS INTERFACE m_axi port=vec offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=row offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=val offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=done offset=slave bundle=gmem

    #pragma HLS INTERFACE axis port=row_stream
    #pragma HLS INTERFACE axis port=vec_stream
    #pragma HLS INTERFACE axis port=output

    #pragma HLS INTERFACE s_axilite port=vec bundle=control
    #pragma HLS INTERFACE s_axilite port=row bundle=control
    #pragma HLS INTERFACE s_axilite port=val bundle=control
    #pragma HLS INTERFACE s_axilite port=done bundle=control
    #pragma HLS INTERFACE s_axilite port=row_size bundle=control
    #pragma HLS INTERFACE s_axilite port=vec_size bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

    // Continue forever, the first loop will break when appropriate
//    while(true){
        // Populate the vector. It has size row_size as that is the maximum possible size
/*        ap_int<32> vector_size = 0;
        for(int i = 0; i < row_size; i++){
            // If this node was visited last step
            if(done[i] == step - 1){
                // Add it to current vec
                vec[vector_size] = i;
                vector_size++;
            }
        }
*/
        ap_int<32> vector_size = 1;
        vec[0] = 0;
        // Stop execution with an empty vector
//        if(vec_size == 0) break;

        // Insert -1s everywhere else in vec
        for(int i = vector_size; i < row_size; i++) vec[i] = -1;

        // For each row, pull it from the arrays
        int last_idx = 0; // last_idx will hold the beginning of the current array
        for(int i = 0; i < row_size; i++){
            int curr_idx = row[i]; // row[i] holds the end of the current array.
            // Travel from last_idx..last_idx + curr_idx
            int vec_idx = 0, row_idx = 0;

            // Pull 16 int32's from row and from vec
            ap_int<32> local_row[16], local_vec[16];
            
            // Fill in the local arrays
            // TODO: Could this be vectorized?
            for(int j = 0; j < 16; j++){
                local_vec[j] = vec[j];
                local_row[j] = val[last_idx + j];
            }

            // Repeatedly run the kernel until found or end of vec/row
            bool found = false;

            while(true){
                // Write each element of local_(vec/col) into the kernel, read the response
                //found = true;
                //break;

                //TODO: Could this also be vectorized? Maybe a larger width?
                for(int j = 0; j < 16; j++){
                    qdma_axis<32,0,0,0> x, y;
                    x.data = local_vec[j];
                    y.data = local_row[j];

                    x.keep_all();
                    y.keep_all();

                    row_stream.write(y);
                    vec_stream.write(x);
                }

                qdma_axis<32,0,0,0> s = output.read();

                if(s.data == 1){
                    found = true;
                    break;
                }
                else if (s.data == 2){
                    // Fill out new vec and start again
                    //  Break if at the end of vec
                    if (vec_idx >= vector_size){
                        break;
                    }

                    vec_idx += 16;
                    for(int j = 0; j < 16; j++) local_vec[j] = vec[j + vec_idx];
                }
                else {
                    // Fill out new row and start again
                    //  Break if at end of row
                    if (row_idx >= curr_idx){
                        break;
                    }

                    row_idx += 16;
                    for(int j = 0; j < 16; j++) local_row[j] = val[last_idx + row_idx + j];
                }
            }

            if (found) {
                // Write the visit step out to an array
                //  Assume done[i] is initialized to -1
                if(done[i] == -1) {
                    done[i] = step;
                }
            }
            
            // Set last_idx to first multiple of 16 after curr_idx
            last_idx = last_idx + (16 * ((curr_idx / 16) + 1));
        }
        
        // Rebuild the vector
/*        int next_available = 0;
        for(int i = 0; i < row_size; i++){
            // First, 0 out all of the vector
            if (i > vec_size) vec[i] = 0;

            if (done[i] == step){
                vec[next_available] = i;
                next_available++;
            }
        }
*/
        // Break out if vec is empty
//        if(next_available == 0) break;

        // Update vec_size with new size
//        vec_size = next_available;

//        step++;
//    }
}
}
