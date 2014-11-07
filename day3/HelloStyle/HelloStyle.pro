#-------------------------------------------------
#
# Project created by QtCreator 2014-11-06T09:25:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloStyle
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    style.qss \
    style_he.qss

RESOURCES += \
    bundle.qrc
