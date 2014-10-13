#-------------------------------------------------
#
# Project created by QtCreator 2014-10-13T09:17:52
#
#-------------------------------------------------

QT       += core gui uitools xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dynamic_ui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dynamicwidget.cpp \
    bookstoreloadersax.cpp \
    bookshandler.cpp \
    bookstoreloaderdom.cpp

HEADERS  += mainwindow.h \
    dynamicwidget.h \
    bookstoreloadersax.h \
    bookshandler.h \
    bookstoreloaderdom.h

FORMS    += mainwindow.ui
