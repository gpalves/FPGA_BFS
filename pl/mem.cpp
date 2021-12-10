#include <ap_int.h>
#include <hls_stream.h>
#include <ap_axi_sdata.h>

extern "C"{
void mem(ap_int<32>* vec, ap_int<32>* row, ap_int<32>* val, 
         ap_int<32>* done, ap_int<32> row_size, ap_int<32> vec_size){

    #pragma HLS INTERFACE m_axi port=vec offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=row offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=val offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=done offset=slave bundle=gmem

    #pragma HLS INTERFACE s_axilite port=vec bundle=control
    #pragma HLS INTERFACE s_axilite port=row bundle=control
    #pragma HLS INTERFACE s_axilite port=val bundle=control
    #pragma HLS INTERFACE s_axilite port=done bundle=control
    #pragma HLS INTERFACE s_axilite port=row_size bundle=control
    #pragma HLS INTERFACE s_axilite port=vec_size bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

    int step = 1;

    while(true){
        // Populate the vector
        ap_int<32> vector_size = 0;
        for(int i = 0; i < row_size; i++){
            // If this node was just visited,
            if(done[i] == step - 1){
                vec[vector_size] = i;
                vector_size++;
            }
        }
        
        // If this vector is empty, break
        if(vector_size == 0) break;

        // Insert -1s everywhere in vec
        for(int i = vector_size; i < row_size; i++) vec[i] = -1;

        // For each row, pull it from the arrays
        int last_idx = 0;
        for(int i = 0; i < row_size; i++){
            int curr_idx = row[i];

            //Go from last_idx..last_idx + curr_idx
            int vec_idx = 16, row_idx = 16;

            ap_int<32> local_row[16], local_vec[16];
            
            // Fill in the local arrays
            for(int j = 0; j < 16; j++){
                local_vec[j] = vec[j];
                local_row[j] = val[last_idx + j];
            }

            // Temp for debugging, change later
            bool found = false;

            int local_row_idx = 0, local_vec_idx = 0;
            while(true){
                // Perform BFS, 16 elements at a time
                
                //  Search for a matching value in local_vec and local_row
                if(local_vec[local_vec_idx] == local_row[local_row_idx]){
                    found = true;
                    break;
                }

                // Increment the smaller of the values
                if(local_vec[local_vec_idx] > local_row[local_row_idx]) local_row_idx++;
                else if(local_vec[local_vec_idx] < local_row[local_row_idx]) local_vec_idx++;

                // If either index  has been accumulated past the size, refill buffer
                if(local_row_idx >= 16) {
                    // If row_idx is past the row's size, then break out here
                    if(row_idx >= curr_idx) break;

                    for(int k = 0; k < 16; k++){
                        local_row[k] = row[last_idx + row_idx + k];
                    }
                    row_idx += 16;
                    local_row_idx = 0;
                }

                if(local_vec_idx >= 16) {
                    // If vec_idx is past vec size, break out here
                    if(vec_idx >= vector_size) break;

                    for(int k = 0; k < 16; k++){
                        local_vec[k] = vec[vec_idx + k];
                    }
                    vec_idx += 16;
                    local_vec_idx = 0;
                }
            }

            if (found && done[i] == -1) done[i] = step;

            // Set last_idx to the first multiple of 16 past curr_idx
            last_idx = last_idx + (16 * ((curr_idx / 16) + 1));
        }
    }


}
}
