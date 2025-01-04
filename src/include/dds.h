// dds.h

#ifndef DDS_H
#define DDS_H

#include <ddraw.h>
#include <memory>
#include <string>

struct DDSHeader {
    DWORD           dwSize;
    DWORD           dwFlags;
    DWORD           dwHeight;
    DWORD           dwWidth;
    DWORD           dwPitchOrLinearSize;
    DWORD           dwDepth;
    DWORD           dwMipMapCount;
    DWORD           dwReserved1[11];
    DDPIXELFORMAT   ddspf;
    DWORD           dwCaps;
    DWORD           dwCaps2;
    DWORD           dwCaps3;
    DWORD           dwCaps4;
    DWORD           dwReserved2;
};

constexpr uint32_t DDSMagic = 0x20534444;

class DDS {
public:
    DDS();

    void setImage(std::shared_ptr<float[]> imageArray,
                  int imageWidth,
                  int imageHeight,
                  int colorDepth,
                  float minValue,
                  float maxValue,
                  bool xFlip,
                  bool yFlip,
                  double primeMeridian);

    int save(std::string filePath);

private:
    DDSHeader initDDSHeader();
    float* getImageArrayPixel(int x, int y);

    std::shared_ptr<float[]> imageArray;
    int imageWidth, imageHeight, colorDepth;
    float minValue, maxValue;
    bool xFlip, yFlip;
    double primeMeridian;
    bool isSet;
};

#endif // DDS_H
