#-------------------------------------------------
#
# Project created by QtCreator 2016-04-16T14:05:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = clock
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    myclock.cpp

HEADERS  += dialog.h \
    myclock.h

FORMS    += dialog.ui
