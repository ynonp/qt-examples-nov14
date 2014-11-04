#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    QWidget w;
    QLabel *l1 = new QLabel("Hello", &w);
    QLabel *l2 = new QLabel("Qt is cool", &w);

    l1->setStyleSheet("background:blue");
    l2->setStyleSheet("background:red");

    QPushButton *button = new QPushButton("Click Me");

    QHBoxLayout *layout = new QHBoxLayout;
    QVBoxLayout *vbox = new QVBoxLayout(&w);

    layout->addWidget(l1, 2);
    layout->addWidget(l2, 1);

    vbox->addLayout(layout);
    vbox->addStretch(1);
    vbox->addWidget(button);

    w.show();

    return a.exec();
}








