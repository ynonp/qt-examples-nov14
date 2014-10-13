#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtGui>
#include <QtCore>
#include "squaremodel.h"
#include "numericdelegate.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTableView lv;

    SquareModel model(10, 3);
    NumericDelegate numericDelegate;

    lv.setModel(&model);
    lv.setItemDelegateForColumn(0, &numericDelegate);
    lv.show();

    return a.exec();
}
