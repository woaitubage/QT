QT += core
QT -= gui

CONFIG += c++11

TARGET = QThread_wait
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mythread.cpp

HEADERS += \
    mythread.h
