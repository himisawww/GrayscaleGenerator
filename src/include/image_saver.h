// image_saver.h

#ifndef IMAGE_SAVER_H
#define IMAGE_SAVER_H

#include <QImage>
#include <QThread>

#include <string>
#include <memory>
#include <functional>

class ImageSaver : public QThread {
    Q_OBJECT

public:
    ImageSaver(QObject *parent = nullptr);
    void setParameter(std::string grayscaleMapSavePath,
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
                      bool saveTXT);

signals:
    void finishedSaving(int result);

protected:
    void run() override;

private:
    float* getGrayscaleMapPixel(int x, int y);
    unsigned char* getColorMapPixel(int x, int y);
    unsigned char* getNormalMapPixel(int x, int y);
    void imageWarper(std::function<void (int x, int y, int i, int j)> warper);
    int saveImageArrayToTXT(std::string fileName);

private:
    std::string grayscaleMapSavePath;
    std::string colorMapSavePath, normalMapSavePath;
    std::string txtSavePath;
    std::shared_ptr<float[]> grayscaleMapArray;
    std::shared_ptr<unsigned char[]> colorMapArray;
    std::shared_ptr<unsigned char[]> normalMapArray;
    int imageWidth, imageHeight;
    float minValue, maxValue;
    std::string imageFormat;
    int grayscaleMapDepth;
    bool xFlip, yFlip;
    double primeMeridian;
    bool saveTXT;
    bool isParameterSet;
};

#endif // IMAGE_SAVER_H
