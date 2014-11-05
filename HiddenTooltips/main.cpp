#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtCore>
#include "hidetooltipsfilter.h"
#include "mytableview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();


    MyTableView tv;
    QStandardItemModel model;
    QStandardItem *li = new QStandardItem("this is a long line of text");
    li->setToolTip("tooltip for long text");
    model.appendRow(li);

    QStandardItem *si = new QStandardItem("short text");
    si->setToolTip("tooltip for short text");
    model.appendRow(si);


    tv.setModel(&model);
    tv.show();
    return a.exec();
}
