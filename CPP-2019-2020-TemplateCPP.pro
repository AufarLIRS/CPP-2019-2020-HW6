TEMPLATE = app
CONFIG += c++11

QMAKE_CXXFLAGS += -std=c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Array.cpp \
        main.cpp \
        swap.cpp \
    MyUniquePtr.cpp

HEADERS += \
    Array.h \
    swap.h \
    MyUniquePtr.h \
