#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <adf.h>
#include <adf/window/types.h>
#include "spmv.h"

using namespace adf;

class kernel_class : public graph {
private:
    kernel k;
public:
    port<input> in0;
    port<input> in1;

    port<output> out0;

    kernel_class(){
        k = kernel::create(sparse);

        // 64 = 16 (size of window) * 4 (size of uint32)
        connect<window<64>>(in0, k.in[0]);
        connect<window<64>>(in1, k.in[1]);

        connect<window<4>>(k.out[0], out0);

        source(k) = "spmv.cc";

        runtime<ratio>(k) = 0.6;
    }
};

#endif
