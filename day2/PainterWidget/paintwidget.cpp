#include "paintwidget.h"

PaintWidget::PaintWidget(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(100, 100);
}

void PaintWidget::start()
{
    startTimer(10);
}

void	 PaintWidget::timerEvent(QTimerEvent * event)
{
    QWidget::timerEvent(event);
    update();
}

void PaintWidget::paintEvent(QPaintEvent *ev)
{
    Q_UNUSED(ev);
    QPainter painter(this);

    m_start.rx() += 5;
    m_start.ry() += 5;

    if ( m_start.x() < rect().topLeft().x() )
    {
        m_start.setX(rect().topLeft().x());
    }

    if ( m_start.y() < rect().topLeft().y() )
    {
        m_start.setY(rect().topLeft().y());
    }

    if ( m_start.x() > rect().topRight().x() )
    {
        m_start.setX(rect().topLeft().x());
    }

    if ( m_start.y() > rect().bottomLeft().y() )
    {
        m_start.setY(rect().topLeft().y());
    }

    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(rect(),
                     Qt::yellow);

    QPalette p = palette();
    QColor bgColor = p.window().color();

    painter.fillRect(rect().adjusted(10, 10, -10, -10),
                     bgColor);


    QPen pen;
    pen.setWidth(5);
    pen.setBrush(Qt::blue);

    painter.setPen(pen);
    painter.drawLine(
                rect().topLeft(),
                m_start);

}








