QT += core
QT += network
QT -= gui

CONFIG += c++11

TARGET = UDP
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myudpsocket.cpp

HEADERS += \
    myudpsocket.h
