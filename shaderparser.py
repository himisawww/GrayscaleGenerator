# shaderparser.py

from re import match
from os.path import (dirname, exists, samefile)
from sys import exit

kernelPath = "src/shader/kernel.cl"
outputPath = "src/include/kernel.h"

included = []

def parse(shader):
    file = open(shader, "r")
    lines = file.readlines()
    for i in range(0, len(lines)):
        include = match("#include \"(.+)\"", lines[i])
        if include:
            relativePath = include.group(1)
            folder = dirname(shader)
            includePath = folder + '/' + relativePath
            if not exists(includePath):
                print("[Error] Cannot find include file \""
                      + includePath
                      + "\" while parsing \""
                      + shader
                      + "\".\n")
                file.close()
                exit(-1)

            isIncluded = False
            for item in included:
                if samefile(includePath, item):
                    isIncluded = True

            if isIncluded:
                lines[i] = ""
            else:
                included.append(includePath)
                lines[i] = parse(includePath)

    file.close()
    return ''.join(lines) + '\n'

def main():
    if not exists(kernelPath):
        print("[Error] Cannot find kernel file "
              + kernelPath
              + ".\n")
        exit(-1)

    file = open(outputPath, "w")
    included.append(kernelPath)
    kernel = parse(kernelPath)
    kernel = kernel.replace("\\", "\\\\")
    kernel = kernel.replace("\"", "\\\"")
    kernel = kernel.replace("\'", "\\\'")
    kernel = kernel.replace("\r\n", "\\r")
    kernel = kernel.replace("\n", "\\n")
    prefix = "// kernel.h\n\n#ifndef __KERNEL__\n#define __KERNEL__\n\n#include <string>\n\n"
    kernel = "const std::string KernelString = " + "\"" + kernel + "\";"
    suffix = "\n\n#endif // __KERNEL__"
    file.write(prefix + kernel + suffix)
    print("Successfully generated " + outputPath + ".")
    file.close()

main()
