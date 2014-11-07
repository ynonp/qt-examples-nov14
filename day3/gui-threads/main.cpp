#include "mainwindow.h"
#include <QApplication>
#include "mytask.h"
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTask t;
    QThread worker;
    t.moveToThread(&worker);
    worker.start();

    MainWindow w(t);
    w.show();

    return a.exec();
}
