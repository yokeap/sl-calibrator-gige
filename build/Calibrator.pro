#
# vim:filetype=qmake sw=4 ts=4 expandtab nospell
#

# Build configuration
# Edit this section to make sure the paths match your system configuration


BASEDIR = ..
TOPDIR = $$BASEDIR/..
UI_DIR = GeneratedFiles
DESTDIR = $$BASEDIR/bin
FORMSDIR = $$BASEDIR/forms
SOURCEDIR = $$BASEDIR/src
RESOURCEDIR = $$BASEDIR/resources

##########################################################################

# Windows 7
win32:OPENCV_DIR = "C:/opencv/build"
win32:OPENCV_LIB_DIR = $$OPENCV_DIR/x86/vc10/lib
win32:CV_VER = 2411

# Debian Jessie
unix:OPENCV_DIR = "/usr/local"
unix:OPENCV_LIB_DIR = $$OPENCV_DIR/lib
unix:PYLON_DIR = "/opt/pylon5"

# Mac OS X
macx:OPENCV_DIR = "/usr/local"
macx:OPENCV_LIB_DIR = $$OPENCV_DIR/lib
macx:EDSDK_DIR = $$BASEDIR/lib/EDSDK

##########################################################################

NAME = Calibrator

CONFIG += qt
#QT += opengl core gui
QT += opengl

#QT += widgets

#greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CV_LIB_NAMES = core imgproc highgui calib3d features2d flann

PYLON_LIB_NAMES = -lpylonbase -lpylonutility -lGenApi_gcc_v3_0_Basler_pylon_v5_0 -lGCBase_gcc_v3_0_Basler_pylon_v5_0

for(lib, CV_LIB_NAMES) {
    CV_LIBS += -lopencv_$$lib
}

exists($${NAME}-custom.pri) {
    include($${NAME}-custom.pri)
}

win32 {
    DEFINES += NOMINMAX _CRT_SECURE_NO_WARNINGS _SCL_SECURE_NO_WARNINGS _USE_MATH_DEFINES
    QMAKE_CXXFLAGS_WARN_ON += -W3 -wd4396 -wd4100 -wd4996
    QMAKE_LFLAGS += /INCREMENTAL:NO
    DSHOW_LIBS = -lStrmiids -lVfw32 -lOle32 -lOleAut32

    CONFIG(release, debug|release) {
        CV_LIB_PREFIX = $$CV_VER
    }
    else {
        CV_LIB_PREFIX = $${CV_VER}d
    }
    for(lib, CV_LIBS) {
        CV_LIBS_NEW += $$lib$$CV_LIB_PREFIX
    }
    CV_LIBS = $$CV_LIBS_NEW $$CV_EXT_LIBS $$DSHOW_LIBS
}

unix:!macx {
    QMAKE_LFLAGS += -Wl,-rpath=$$PYLON_DIR/lib64
    #QMAKE_CXXFLAGS += -DQT_COMPILING_QSTRING_COMPAT_CPP
    #QMAKE_CXXFLAGS += -g -std=c++11
    #QMAKE_CXXFLAGS += -stdlib=libc++

    #add pylon
    #INCLUDEPATH += $$PYLON_DIR/include/pylon

    LIBS += -L$$PYLON_DIR/lib64 $$PYLON_LIB_NAMES
    INCLUDEPATH += $$PYLON_DIR/include #$$PYLON_DIR/include/pylon
}

macx {
    QMAKE_CXXFLAGS += -std=c++11
    QMAKE_LFLAGS += -F$$EDSDK_DIR/FrPylonIncludes.hamework
    LIBS += -framework Foundation -framework QTKit -framework EDSDK
    # Lion and Mountain Lion
#    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.6

    # Mavericks and Yosemite
    QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9
    ICON = $$RESOURCEDIR/Calibrator.icns
}

CONFIG(release, debug|release) {
    TARGET = $$NAME
}
else {
    TARGET = $${NAME}_d
    CONFIG += console
}

LIBS += -L$$OPENCV_LIB_DIR $$CV_LIBS #-L$$PYLON_DIR/lib64
INCLUDEPATH += $$SOURCEDIR $$UI_DIR $$OPENCV_DIR/include _DIR/Header

include($${NAME}.pri)
