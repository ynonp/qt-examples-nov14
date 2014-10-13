#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("YnonPerek");
    QCoreApplication::setOrganizationDomain("ynonperek.com");
    QCoreApplication::setApplicationName("Settings Demo");


    MainWindow w;
    w.show();

    return a.exec();
}
