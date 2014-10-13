#include "mainwindow.h"
#include <QApplication>
#include <QtUiTools>
#include <QtCore>
#include <QtWidgets>
#include "dynamicwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DynamicWidget w("/Users/ynonperek/tmp/qt-examples/dynamic_ui/xml/bookstore.xml");
    w.show();

    return a.exec();
}
