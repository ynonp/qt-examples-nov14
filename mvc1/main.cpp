#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QStringList shopping;
    shopping << "bread" << "apples" << "bananas";

    QStringListModel model1(shopping);
    QStringListModel model2(shopping);

    QListView v1;
    v1.setModel(&model1);

    QComboBox v2;
    v2.setModel(&model2);

    v1.show();
    v2.show();
    return a.exec();
}
