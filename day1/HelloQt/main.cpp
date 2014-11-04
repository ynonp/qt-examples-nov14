#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QObject o;


    return a.exec();
}
