#include "dynamicwidget.h"
#include <QtUiTools/QUiLoader>
#include <QFile>
#include <QDebug>
#include <QtWidgets>

DynamicWidget::DynamicWidget(QString filename, QWidget *parent) :
    QWidget(parent)
{
    QFile f(filename);
    if ( f.open(QIODevice::ReadOnly) )
    {
        QUiLoader l;
        QHBoxLayout *layout = new QHBoxLayout(this);
        layout->addWidget(l.load(&f, this));
    }
    else
    {
        qDebug() << "Failed to open file: " << filename;
    }

    QLabel *label = findChild<QLabel *>("label");
    label->setText("Loaded OK");
}










