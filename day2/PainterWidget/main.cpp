#include "mainwindow.h"
#include <QApplication>
#include "paintwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    PaintWidget w;
    QPalette p = w.palette();
    p.setColor(QPalette::Window, Qt::red);
    w.setPalette(p);

    w.show();


    return a.exec();
}
