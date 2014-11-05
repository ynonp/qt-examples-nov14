#include "mainwindow.h"
#include <QApplication>
#include "mathmodel.h"
#include <QtWidgets>
#include "mydelegate.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    MathModel model(10);
    QTableView tv;
    MyDelegate del;

    tv.setModel(&model);
    tv.setItemDelegateForColumn(0, &del);

    tv.show();
    return a.exec();
}
