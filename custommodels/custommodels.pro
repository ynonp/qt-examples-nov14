#-------------------------------------------------
#
# Project created by QtCreator 2014-10-11T17:29:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = custommodels
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    squaremodel.cpp \
    numericdelegate.cpp

HEADERS  += mainwindow.h \
    squaremodel.h \
    numericdelegate.h

FORMS    += mainwindow.ui
