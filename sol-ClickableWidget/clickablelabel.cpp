#include "clickablelabel.h"
#include <QtWidgets>

ClickableLabel::ClickableLabel(QWidget *parent) :
    QLabel(parent)
{
}

void ClickableLabel::mousePressEvent(QMouseEvent *ev)
{
    if ( ev->button() == Qt::LeftButton )
    {
        emit clicked();
    }
}
