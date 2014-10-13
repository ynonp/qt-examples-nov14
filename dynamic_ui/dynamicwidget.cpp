#include "dynamicwidget.h"
#include <QtUiTools>
#include <QtWidgets>
#include "bookstoreloadersax.h"
#include "bookstoreloaderdom.h"

DynamicWidget::DynamicWidget(QString xmlFileName, QWidget *parent) :
    QWidget(parent)
{
    QFile f(xmlFileName);
    if ( f.open(QIODevice::ReadOnly) )
    {
//        QUiLoader l;
//        l.load(&f, this);
//       BookstoreLoaderSax l;
//       l.load(&f, this);

        BookstoreLoaderDOM l;
        l.load(&f, this);
    }
//    connectSignalsAndSlots();
}

void DynamicWidget::connectSignalsAndSlots()
{
    QPushButton *redBtn = findChild<QPushButton *>("btnRed");
    QObject::connect(redBtn, &QPushButton::clicked, this, &DynamicWidget::paintItRed);
}

void DynamicWidget::paintItRed()
{
    setStyleSheet("background: red");
}
