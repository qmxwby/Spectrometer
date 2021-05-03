QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    ChromaticsInteface.h \
    ChromaticsStruct.h \
    FLA5000DLLStruct.h \
    Inteface.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    echarts.min.js \
    lineView.html

LIBS += "../build-surface-Desktop_Qt_5_12_10_MinGW_64_bit-Debug\debug\ChromaticsDll.dll"
LIBS += "../build-surface-Desktop_Qt_5_12_10_MinGW_64_bit-Debug\debug\FLA5000DLL.dll"
