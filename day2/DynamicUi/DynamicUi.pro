#-------------------------------------------------
#
# Project created by QtCreator 2014-11-05T12:03:49
#
#-------------------------------------------------

QT       += core gui uitools xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DynamicUi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dynamicwidget.cpp \
    mysaxloader.cpp \
    mysaxhandler.cpp

HEADERS  += mainwindow.h \
    dynamicwidget.h \
    mysaxloader.h \
    mysaxhandler.h

FORMS    += mainwindow.ui
