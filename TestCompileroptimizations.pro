TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

CONFIG +=c++11


QMAKE_LFLAGS_RELEASE -= -O1
QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE -= -O3

QMAKE_CXXFLAGS_RELEASE += -O0

