QT += core
QT += network
QT -= gui

CONFIG += c++11

TARGET = QHttpDownload
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    download.cpp

HEADERS += \
    download.h
