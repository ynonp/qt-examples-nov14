#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    bool result = translator.load(":localization.qm");
    a.installTranslator(&translator);

    QWidget w;
    QVBoxLayout *layout = new QVBoxLayout(&w);

    layout->addWidget(new QLabel(QObject::tr("Hello")));
    layout->addWidget(new QPushButton(QObject::tr("Click Me")));


    w.show();

    return a.exec();
}
