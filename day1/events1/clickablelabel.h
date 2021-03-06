#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>

class QMouseEvent;

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel(QWidget *parent = 0);

    virtual void mousePressEvent(QMouseEvent *ev);

signals:
    void clicked();

public slots:

};

#endif // CLICKABLELABEL_H
