#ifndef DYNAMICWIDGET_H
#define DYNAMICWIDGET_H

#include <QWidget>

class DynamicWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DynamicWidget(QString filename, QWidget *parent = 0);

signals:

public slots:

};

#endif // DYNAMICWIDGET_H
