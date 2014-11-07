#include "colorwidget.h"
#include <QtWidgets>

ColorWidget::ColorWidget(QWidget *parent) :
    QWidget(parent)
{
    setFixedSize(200, 200);
    qsrand(time(NULL));
}

void ColorWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    QColor clr(Qt::red);
    int hue = clr.hslHue();
    int s = clr.saturation();
    int l = clr.lightness();

    int delta = qrand() % 20 + 40;

    for ( int i=0; i < 10; i++ )
    {
        clr.setHsl(hue, s, l);
        // hue = qFloor(qrand() % 360);
         hue = (hue + delta) % 360;

        // painter.setBrush(clr);

        painter.fillRect(i * 30, i * 30, 30, 30, clr);
    }
}







