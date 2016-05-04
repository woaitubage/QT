QT += core
QT += network
QT -= gui

CONFIG += c++11

TARGET = TcpServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mytcpserver.cpp

HEADERS += \
    mytcpserver.h
