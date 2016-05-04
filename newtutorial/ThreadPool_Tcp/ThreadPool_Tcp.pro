QT += core
QT -= gui
QT += network

CONFIG += c++11

TARGET = ThreadPool_Tcp
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myserver.cpp \
    myrunnable.cpp

HEADERS += \
    myserver.h \
    myrunnable.h
