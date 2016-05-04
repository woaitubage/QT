#-------------------------------------------------
#
# Project created by QtCreator 2016-04-26T13:43:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ConProd2
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    producer.cpp \
    consumer.cpp

HEADERS  += dialog.h \
    myconstants.h \
    producer.h \
    consumer.h \
    common.h

FORMS    += dialog.ui
