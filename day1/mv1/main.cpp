#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    QStandardItemModel model;
    QStandardItem *item1 = new QStandardItem("foo");
    QStandardItem *item2 = new QStandardItem("bar");
    QStandardItem *item3 = new QStandardItem("buz");

    item2->setData(QVariant::fromValue<QColor>(Qt::red),
                   Qt::DecorationRole);

    item1->appendRow(item2);
    item1->setCheckable(true);

    QList<QStandardItem *>row;
    row << new QStandardItem("A") << new QStandardItem("B") << new QStandardItem("C");
    model.appendRow(item1);
    model.appendRow(item3);
    model.appendRow(row);

    QTreeView tv;
    tv.setModel(&model);
    tv.show();

    return a.exec();
}




