#include "mainwindow.h"
#include <QApplication>
#include "dynamicwidget.h"
#include <QtXml/QtXml>
#include "mysaxhandler.h"
#include "mysaxloader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    DynamicWidget w("/Users/ynonperek/tmp/qt-examples-nov14/runtime.ui");
//    w.show();
    QWidget w;
    QFile f("/Users/ynonperek/library.xml");
    if ( f.open(QIODevice::ReadOnly))
    {
        MySaxLoader l;
        l.load(&f, &w);
    }

    w.show();
    return a.exec();
}















