#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T21:05:40
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HCI_gesture1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    videothread.cpp

HEADERS  += mainwindow.h \
    videothread.h

FORMS    += mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix {
    CONFIG += link_pkgconfig
    PKGCONFIG += opencv

}

INCLUDEPATH += D:\opencv\build\include

LIBS += D:\opencv-build\bin\libopencv_core320.dll
LIBS += D:\opencv-build\bin\libopencv_highgui320.dll
LIBS += D:\opencv-build\bin\libopencv_imgcodecs320.dll
LIBS += D:\opencv-build\bin\libopencv_imgproc320.dll
LIBS += D:\opencv-build\bin\libopencv_features2d320.dll
LIBS += D:\opencv-build\bin\libopencv_calib3d320.dll
LIBS += D:\opencv-build\bin\libopencv_videoio320.dll

# Default rules for deployment.

