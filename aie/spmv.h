#ifndef __SPMV_H__
#define __SPMV_H__

#include <adf/window/types.h>

void sparse(input_window_int32* row, input_window_int32* vec, output_window_int32* output);

#endif
