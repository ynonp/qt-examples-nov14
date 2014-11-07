#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QFile f(":/style.qss");
    if ( f.open(QIODevice::ReadOnly) )
    {
        QString style = f.readAll();
        qDebug() << "Loading style: " << style;
        a.setStyleSheet(style);
    }
    else
    {
        qDebug() << "Failed to open style file";
    }


    return a.exec();
}
