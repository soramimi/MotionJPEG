#-------------------------------------------------
#
# Project created by QtCreator 2019-04-08T13:04:36
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = MotionJPEG
TEMPLATE = app

CONFIG += c++11

#linux:LIBS += -lopencv_core -lopencv_highgui -lopencv_imgproc
#win32:LIBS += -LC:\opencv\build\x64\vc12\lib -lopencv_core2412 -lopencv_highgui2412 -lopencv_imgproc2412

SOURCES += \
        MotionJPEG.cpp \
        main.cpp \
        MainWindow.cpp

HEADERS += \
        MainWindow.h \
        MotionJPEG.h

FORMS += \
        MainWindow.ui

