#-------------------------------------------------
#
# Project created by QtCreator 2014-10-14T17:19:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = localised
TEMPLATE = app

TRANSLATIONS    +=  localization_he.ts

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    translations.qrc
