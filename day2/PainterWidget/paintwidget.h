#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QWidget>
#include <QtWidgets>

class PaintWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PaintWidget(QWidget *parent = 0);

    void start();

protected:
    virtual void paintEvent(QPaintEvent *ev);
    virtual void	timerEvent(QTimerEvent * event);


public slots:

private:
    QPoint m_start;

};

#endif // PAINTWIDGET_H
