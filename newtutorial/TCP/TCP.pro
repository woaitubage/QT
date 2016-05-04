QT += core
QT += network
QT -= gui

CONFIG += c++11

TARGET = TCP
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mytcpsocket.cpp

HEADERS += \
    mytcpsocket.h
