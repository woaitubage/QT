QT += core
QT -= gui
QT += network

CONFIG += c++11

TARGET = MultiThreadQTcpServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myserver.cpp \
    myclient.cpp \
    mytask.cpp

HEADERS += \
    myserver.h \
    myclient.h \
    mytask.h
