#-------------------------------------------------
#
# Project created by QtCreator 2014-10-12T11:59:01
#
#-------------------------------------------------

QT       += core gui concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = concurency1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    countworker.cpp

HEADERS  += mainwindow.h \
    countworker.h

FORMS    += mainwindow.ui
