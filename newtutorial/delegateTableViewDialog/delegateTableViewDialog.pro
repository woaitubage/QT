#-------------------------------------------------
#
# Project created by QtCreator 2016-04-26T17:10:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = delegateTableViewDialog
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    mydelegate.cpp

HEADERS  += dialog.h \
    mydelegate.h

FORMS    += dialog.ui
