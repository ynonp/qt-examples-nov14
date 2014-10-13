#ifndef DYNAMICWIDGET_H
#define DYNAMICWIDGET_H

#include <QWidget>

class DynamicWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DynamicWidget(QString xmlFileName, QWidget *parent = 0);

    void connectSignalsAndSlots();

signals:

public slots:
    void paintItRed();

};

#endif // DYNAMICWIDGET_H
