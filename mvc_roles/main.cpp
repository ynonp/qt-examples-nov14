#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QList<QColor> colors;
    colors << Qt::red << Qt::blue << Qt::green << Qt::gray << Qt::yellow;

    QStandardItemModel model;
    for ( int i=0; i < 5; i++ )
    {
        QList<QStandardItem *> row;
        for ( int j=0; j < 5; j++ )
        {
            QStandardItem *item = new QStandardItem(QString("[%1, %2]").arg(i+1).arg(j+1));
            item->setData(QVariant::fromValue<QColor>(colors[j]), Qt::DecorationRole);
            item->setEditable(false);
            row << item;
        }
        model.appendRow(row);
    }

    QTableView tv;
    tv.setModel(&model);
    tv.show();

    return a.exec();
}
