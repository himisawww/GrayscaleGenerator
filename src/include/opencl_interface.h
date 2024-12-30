// opencl_interface.h

#ifndef OPENCL_INTERFACE_H
#define OPENCL_INTERFACE_H

#include <vector>
#include <string>
#include <map>

#include "opencl.h"

class OpenCLInterface {
public:
    OpenCLInterface();
    int init(std::string deviceName);
    bool isInit() const;

    std::vector<std::string> getDeviceList();
    cl::Device getDevice() const;
    cl::Context getContext() const;
    cl::CommandQueue getCommandQueue() const;
    cl::Kernel getKernel(std::string kernelName) const;

private:
    cl::Device globalOpenCLDevice;
    cl::Context globalOpenCLContext;
    cl::CommandQueue globalOpenCLCommandQueue;
    std::map<std::string, cl::Kernel> globalOpenCLKernelMap;

    bool isInitialized;
};

#endif // OPENCL_INTERFACE_H
