#include "adf.h"
#include "spmv.h"

// Target 1: Get it running
//  Synchronous window access -> extra data transfer, but lower programming complexity
// Target 2: Optimize
//  Move to asynchronous windows -> extra logic for PL, and potential for deadlock, etc.
void sparse(input_window_int32* row, input_window_int32* vec, output_window_int32* output){
    window_write(output, 1);
    return;

    // Get the first integer from each window
    uint32_t row_val = window_readincr(row);
    uint32_t vec_val = window_readincr(vec);
    uint32_t row_idx = 1, vec_idx = 1;

    // While True:
    while(true){
        // If both ints match, write found to output & break
        if(row_val == vec_val){
            window_write(output, 1);
            break;
        }
        // Else, replace lower int with the next in the sequence
        else if(row_val > vec_val){
            if(vec_idx + 1 > 16){
                // Vec has run out, request replacement
                window_write(output, 2);
                break;
            } else{
                vec_val = window_readincr(vec);
                vec_idx++;
            }
        } else {
            if(row_idx + 1 > 16){
                // Row has run out, request replacement
                window_write(output, 3);
                break;
            } else {
                row_val = window_readincr(row);
                row_idx++;
            }
        }
    }
}
