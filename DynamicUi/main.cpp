#include "mainwindow.h"
#include <QApplication>
#include "dynamicwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    DynamicWidget w("/Users/ynonperek/tmp/qt-examples-nov14/runtime.ui");
    w.show();


    return a.exec();
}
