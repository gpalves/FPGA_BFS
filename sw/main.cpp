#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include <CL/cl2.hpp>
#include <unistd.h>

#define CL_HPP_CL_1_2_DEFAULT_BUILD
#define CL_HPP_TARGET_OPENCL_VERSION 120
#define CL_HPP_MINIMUM_OPENCL_VERSION 120
#define CL_HPP_ENABLE_PROGRAM_CONSTRUCTION_FROM_ARRAY_COMPATIBILITY 1

using namespace std;

vector<cl::Device> get_xilinx_devices(){
    size_t i;
    cl_int err;
    vector<cl::Platform> platforms;

    err = cl::Platform::get(&platforms);
    cl::Platform platform;

    for(i = 0; i < platforms.size(); i++){
        platform = platforms[i];
        string platformName = platform.getInfo<CL_PLATFORM_NAME>(&err);
        if(platformName == "Xilinx"){
            cout << "Found Xilinx Platform" << endl;
            break;
        }
    }

    if(i == platforms.size()) {
        cout << "Failed to find Xilinx Platform" << endl;
        exit(EXIT_FAILURE);
    }

    vector<cl::Device> devices;
    err = platform.getDevices(CL_DEVICE_TYPE_ACCELERATOR, &devices);
    
    return devices;
}

char *read_binary_file(const string &xclbin_file_name, unsigned &nb){
    if(access(xclbin_file_name.c_str(), R_OK) != 0){
        cout << "XCLBIN not available" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Loading XCLBIN" << endl;
    ifstream bin_file(xclbin_file_name.c_str(), ifstream::binary);
    bin_file.seekg(0, bin_file.end);
    nb = bin_file.tellg();
    bin_file.seekg(0, bin_file.beg);
    char *buf = new char[nb];

    bin_file.read(buf, nb);
    return buf;
}

int main(int argc, char** argv){
    // Initialize OpenCL
    string binaryFile = "a.xclbin";
    cl_int err;
    unsigned fileBufSize;
    vector<cl::Device> devices = get_xilinx_devices();
    devices.resize(1);
    cl::Device device = devices[0];
    cl::Context context(device);
    char *fileBuf = read_binary_file(binaryFile, fileBufSize);
    cl::Program::Binaries bins{{fileBuf, fileBufSize}};
    cl::Program program(context, devices, bins);

    cl::CommandQueue q(context, device, CL_QUEUE_PROFILING_ENABLE, &err);
    
    cl::Kernel krnl_mem(program, "mem", &err);

    // Read in the graph from disk
    //  Vals should be read first, in blocks of 16
    std::ifstream row_stream("row.txt");
    std::ifstream val_stream("val.txt");

    std::vector<int> row_data, val_data;
    int last_i = 0;

    while(!row_stream.eof()){
        last_i = 0;
        int i;
        row_stream >> i;
        
        // Push in the data to val_data vector
        for(last_i; last_i < i; last_i++){
            int j;
            val_stream >> j;
            val_data.push_back(j);
        }

        // Push the size of the row without padding
        row_data.push_back(i);

        // Pad val_data out to a multiple of 16 with 0s
        i = (16 * ((i / 16) + 1)); // i becomes the next nearest multiple of 16
        
        for(last_i; last_i < i; last_i++){
            val_data.push_back(0);
        }
    }
    
    // Debugging: Print out the values from the vectors to ensure everything loaded
    for(int i : val_data) cout << i << " ";
    cout << endl << endl;

    for(int j : row_data) cout << j << " ";
    cout << endl;
    
    cout << "Data loaded" << endl;

    // Allocate OpenCL Buffers
    cl::Buffer vec_buf(context, CL_MEM_READ_WRITE, sizeof(int) * row_data.size(), NULL, &err);
    cl::Buffer done_buf(context, CL_MEM_READ_WRITE, sizeof(int) * row_data.size(), NULL, &err);
    cl::Buffer row_buf(context, CL_MEM_READ_WRITE, sizeof(int) * row_data.size(), NULL, &err);
    cl::Buffer val_buf(context, CL_MEM_READ_WRITE, sizeof(int) * val_data.size(), NULL, &err);

    int *vec_mapped = (int*)q.enqueueMapBuffer(vec_buf, CL_TRUE, CL_MAP_WRITE, 0, sizeof(int) * row_data.size());
    int *done_mapped = (int*)q.enqueueMapBuffer(done_buf, CL_TRUE, CL_MAP_WRITE, 0, sizeof(int) * row_data.size());
    int *row_mapped = (int*)q.enqueueMapBuffer(row_buf, CL_TRUE, CL_MAP_WRITE, 0, sizeof(int) * row_data.size());
    int *val_mapped = (int*)q.enqueueMapBuffer(val_buf, CL_TRUE, CL_MAP_WRITE, 0, sizeof(int) * row_data.size());

    for(int i = 0; i < row_data.size(); i++){
        vec_mapped[i] = -1;
        done_mapped[i] = -1;
        row_mapped[i] = row_data[i];
    }
    done_mapped[0] = 0;

    for(int i = 0; i < val_data.size(); i++){
        val_mapped[i] = val_data[i];
    }

    krnl_mem.setArg(0, vec_buf);
    krnl_mem.setArg(1, row_buf);
    krnl_mem.setArg(2, val_buf);
    krnl_mem.setArg(3, done_buf);
    krnl_mem.setArg(4, row_data.size());
    krnl_mem.setArg(5, 1);

    q.enqueueMigrateMemObjects({vec_buf, done_buf, row_buf, val_buf}, 0);
    q.enqueueTask(krnl_mem);
   
    q.finish();
}
