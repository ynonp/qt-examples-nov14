#include "mainwindow.h"
#include <QApplication>
#include "colorwidget.h"
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    ColorWidget clr;
    clr.show();
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(2);
    effect->setColor(QColor::fromRgba(qRgba(0, 0, 0, 60)));
    effect->setYOffset(4);
    effect->setXOffset(4);
    clr.setGraphicsEffect(effect);

    return a.exec();
}
