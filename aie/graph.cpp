#include "graph.h"

PLIO *in0 = new PLIO("DataIn1", adf::plio_32_bits, "data/row.txt");
PLIO *in1 = new PLIO("DataIn2", adf::plio_32_bits, "data/vec.txt");

PLIO *out0 = new PLIO("DataOut1", adf::plio_32_bits, "out.txt");

using namespace adf;

simulation::platform<2,1> platform(in0, in1, out0);

kernel_class spmv_graph;

connect<> net0(platform.src[0], spmv_graph.in0);
connect<> net1(platform.src[1], spmv_graph.in1);
connect<> net2(spmv_graph.out0, platform.sink[0]);

#if defined(__AIESIM__) || defined(__X86SIM__)
int main(int argc, char** argv){
    spmv_graph.init();
    spmv_graph.run(1);
    spmv_graph.end();
    return 0;
}
#endif
