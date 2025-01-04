QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

LIBS += $$PWD/third_party/OpenCL/lib/OpenCL.lib

QMAKE_CXXFLAGS_RELEASE += -O2

INCLUDEPATH += \
    $$PWD/src/include \
    $$PWD/third_party \
    $$PWD/third_party/OpenCL/include

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/bvh_dispatcher.cpp \
    src/bound3d.cpp \
    src/bvh.cpp \
    src/dds.cpp \
    src/geopotential_dispatcher.cpp \
    src/image_saver.cpp \
    src/main.cpp \
    src/mesh.cpp \
    src/geopotential.cpp \
    src/geopotential_impl.cpp \
    src/mesh_dispatcher.cpp \
    src/opencl_interface.cpp \
    src/renderer.cpp \
    src/triangle.cpp \
    src/vector3d.cpp \
    src/widget.cpp

HEADERS += \
    src/include/bound3d.h \
    src/include/bvh.h \
    src/include/bvh_dispatcher.h \
    src/include/dds.h \
    src/include/geopotential_dispatcher.h \
    src/include/image_saver.h \
    src/include/kernel.h \
    src/include/mesh.h \
    src/include/geopotential.h \
    src/include/mesh_dispatcher.h \
    src/include/opencl.h \
    src/include/opencl_interface.h \
    src/include/renderer.h \
    src/include/triangle.h \
    src/include/vector3d.h \
    src/include/vec_t.h \
    src/include/widget.h \
    third_party/OpenCL/include/CL/opencl.hpp \
    third_party/tinyobjloader/tiny_obj_loader.h

FORMS += \
    ui/widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/resource.qrc

RC_ICONS = resource/icon/icon.ico
