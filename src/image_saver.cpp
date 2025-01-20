// image_saver.cpp

#include <QImage>
#include <QObject>
#include <QThread>
#include <QFileInfo>

#include <string>
#include <memory>
#include <fstream>
#include <functional>

#include "image_saver.h"
#include "dds_image.h"

ImageSaver::ImageSaver(QObject *parent): QThread(parent), isParameterSet(false) {}

void ImageSaver::setParameter(
    std::string grayscaleMapSavePath,
    std::string colorMapSavePath,
    std::string normalMapSavePath,
    std::string txtSavePath,
    std::shared_ptr<float[]> grayscaleMapArray,
    std::shared_ptr<unsigned char[]> colorMapArray,
    std::shared_ptr<unsigned char[]> normalMapArray,
    int width,
    int height,
    float min,
    float max,
    std::string format,
    int depth,
    bool xFlip,
    bool yFlip,
    double primeMeridian,
    bool saveTXT) {

    this->grayscaleMapSavePath = grayscaleMapSavePath;
    this->colorMapSavePath = colorMapSavePath;
    this->normalMapSavePath = normalMapSavePath;
    this->txtSavePath = txtSavePath;
    this->grayscaleMapArray = grayscaleMapArray;
    this->colorMapArray = colorMapArray;
    this->normalMapArray = normalMapArray;
    this->imageWidth = width;
    this->imageHeight = height;
    this->minValue = min;
    this->maxValue = max;
    this->imageFormat = format;
    this->grayscaleMapDepth = depth;
    this->xFlip = xFlip;
    this->yFlip = yFlip;
    this->primeMeridian = primeMeridian;
    this->saveTXT = saveTXT;
    isParameterSet = true;
}

void ImageSaver::run() {
    if (isParameterSet) {
        // Save TXT
        if (saveTXT) {
            if (saveImageArrayToTXT(txtSavePath) == -1) {
                emit finishedSaving(-5);
            }
        }

        // Save DDS
        if (imageFormat == "DDS") {
            // Save Grayscale Map
            DDSImage grayscaleMap(imageWidth, imageHeight, grayscaleMapDepth == 8 ?
                                                               DDSImage::Type::Grayscale8 :
                                                               DDSImage::Type::Grayscale16);

            float range = maxValue - minValue;

            if (grayscaleMapDepth == 8) {
                imageWarper([&grayscaleMap, range, this] (int x, int y, int i, int j) {
                    float normalized = (*getGrayscaleMapPixel(i, j) - minValue) / range;
                    uint8_t pixelValue = static_cast<uint8_t>(normalized * 255);
                    pixelValue = range > 0.0f ? pixelValue : 255;
                    grayscaleMap.setPixel(x, y, pixelValue);
                });
            }
            else {
                imageWarper([&grayscaleMap, range, this] (int x, int y, int i, int j) {
                    float normalized = (*getGrayscaleMapPixel(i, j) - minValue) / range;
                    uint16_t pixelValue = static_cast<uint16_t>(normalized * 65535);
                    pixelValue = range > 0.0f ? pixelValue : 65535;
                    grayscaleMap.setPixel(x, y, pixelValue);
                });
            }

            if (grayscaleMap.save(grayscaleMapSavePath) != 0) {
                emit finishedSaving(-2);
                return;
            }

            if (colorMapArray.get()) {
                // Save Color Map
                DDSImage colorMap(imageWidth,
                                  imageHeight,
                                  DDSImage::Type::RGB888);

                imageWarper([&colorMap, this] (int x, int y, int i, int j) {
                    uint8_t *pixel = getColorMapPixel(i, j);
                    colorMap.setPixel(x, y, *(pixel + 0), *(pixel + 1), *(pixel + 2));
                });

                if (colorMap.save(colorMapSavePath) != 0) {
                    emit finishedSaving(-3);
                    return;
                }
            }

            if (normalMapArray.get()) {
                // Save Normal Map
                DDSImage normalMap(imageWidth,
                                   imageHeight,
                                   DDSImage::Type::RGB888);

                imageWarper([&normalMap, this] (int x, int y, int i, int j) {
                    uint8_t *pixel = getNormalMapPixel(i, j);
                    normalMap.setPixel(x, y, *(pixel + 0), *(pixel + 1), *(pixel + 2));
                });

                if (normalMap.save(normalMapSavePath) != 0) {
                    emit finishedSaving(-4);
                    return;
                }
            }
        }
        else {
            // Save Grayscale Map
            QImage::Format grayscaleMapFormat = grayscaleMapDepth == 8 ?
                                                    QImage::Format_Grayscale8 :
                                                    QImage::Format_Grayscale16;

            QImage grayscaleMap(imageWidth, imageHeight, grayscaleMapFormat);
            float range = maxValue - minValue;

            if (grayscaleMapDepth == 8) {
                imageWarper([&grayscaleMap, range, this] (int x, int y, int i, int j) {
                    float normalized = (*getGrayscaleMapPixel(i, j) - minValue) / range;
                    uint8_t pixelValue = static_cast<uint8_t>(normalized * 255);
                    pixelValue = range > 0.0f ? pixelValue : 255;
                    grayscaleMap.setPixelColor(x, y, qRgb(pixelValue, pixelValue, pixelValue));
                });
            }
            else {
                imageWarper([&grayscaleMap, range, this] (int x, int y, int i, int j) {
                    float normalized = (*getGrayscaleMapPixel(i, j) - minValue) / range;
                    uint16_t pixelValue = static_cast<uint16_t>(normalized * 65535);
                    pixelValue = range > 0.0f ? pixelValue : 65535;
                    grayscaleMap.setPixelColor(x, y, QRgba64::fromRgba64(pixelValue, pixelValue, pixelValue, pixelValue));
                });
            }

            if (!grayscaleMap.save(QString::fromStdString(grayscaleMapSavePath), imageFormat.c_str())) {
                emit finishedSaving(-2);
                return;
            }

            if (colorMapArray.get()) {
                // Save Color Map
                QImage colorMap(imageWidth, imageHeight, QImage::Format_RGB888);

                imageWarper([&colorMap, this] (int x, int y, int i, int j) {
                    uint8_t *pixel = getColorMapPixel(i, j);
                    colorMap.setPixelColor(x, y, qRgb(*(pixel + 0), *(pixel + 1), *(pixel + 2)));
                });

                if (!colorMap.save(QString::fromStdString(colorMapSavePath), imageFormat.c_str())) {
                    emit finishedSaving(-3);
                    return;
                }
            }

            if (normalMapArray.get()) {
                // Save Normal Map
                QImage normalMap(imageWidth, imageHeight, QImage::Format_RGB888);

                imageWarper([&normalMap, this] (int x, int y, int i, int j) {
                    uint8_t *pixel = getNormalMapPixel(i, j);
                    normalMap.setPixelColor(x, y, qRgb(*(pixel + 0), *(pixel + 1), *(pixel + 2)));
                });

                if (!normalMap.save(QString::fromStdString(normalMapSavePath), imageFormat.c_str())) {
                    emit finishedSaving(-4);
                    return;
                }
            }
        }

        emit finishedSaving(0);
    }
    else {
        emit finishedSaving(-1);
    }
}

int ImageSaver::saveImageArrayToTXT(std::string fileName) {
    std::ofstream outputStream(fileName);
    if (!outputStream.is_open()) {
        return -1;
    }

    int arrayLength = imageWidth * imageHeight;
    std::string text = "";
    for (int i = 0; i < arrayLength; i++) {
        text += std::format("{:.8f}", *(grayscaleMapArray.get() + i)) + "\n";
    }
    outputStream << text;

    outputStream.close();
    return 0;
}

float* ImageSaver::getGrayscaleMapPixel(int x, int y) {
    x = std::clamp(x, 0, imageWidth - 1);
    y = std::clamp(y, 0, imageHeight - 1);
    return grayscaleMapArray.get() + y * imageWidth + x;
}

unsigned char* ImageSaver::getColorMapPixel(int x, int y) {
    x = std::clamp(x, 0, imageWidth - 1);
    y = std::clamp(y, 0, imageHeight - 1);
    return colorMapArray.get() + (y * imageWidth + x) * 4;
}

unsigned char* ImageSaver::getNormalMapPixel(int x, int y) {
    x = std::clamp(x, 0, imageWidth - 1);
    y = std::clamp(y, 0, imageHeight - 1);
    return normalMapArray.get() + (y * imageWidth + x) * 4;
}

void ImageSaver::imageWarper(std::function<void (int, int, int, int)> warper) {
    int bias = static_cast<int>(primeMeridian * imageWidth / 360.0);

    for (int j = 0; j < imageHeight; j++) {
        for (int i = 0; i < imageWidth; i++) {
            int x = i;
            int y = j;

            // Prime Meridian
            x = (x - bias) % imageWidth;
            x = x < 0 ? x + imageWidth : x;

            // Flip
            x = xFlip ? imageWidth - x - 1 : x;
            y = yFlip ? imageHeight - y - 1 : y;

            // Warper
            warper(x, y, i, j);
        }
    }
}
