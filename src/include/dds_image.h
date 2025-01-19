// dds.h

#ifndef DDS_IMAGE_H
#define DDS_IMAGE_H

#include <ddraw.h>
#include <string>

class DDSImage {
public:
    enum Type {
        Grayscale8 = 1,
        Grayscale16 = 2,
        RGB888 = 3
    };

    DDSImage(int width, int height, Type type);
    ~DDSImage();

    void setPixel(int x, int y, uint8_t value);
    void setPixel(int x, int y, uint16_t value);
    void setPixel(int x, int y, uint8_t r, uint8_t g, uint8_t b);
    const void* getPixel(int x, int y) const;
    int save(std::string filePath);

private:
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

    static constexpr uint32_t DDSMagic = 0x20534444;

    DDSHeader initDDSHeader();
    unsigned char* getImageArrayPixel(int x, int y) const;

    unsigned char *imageArray;
    int imageWidth, imageHeight, imageType;
};

#endif // DDS_IMAGE_H
