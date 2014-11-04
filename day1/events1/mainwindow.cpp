#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->installEventFilter(this);
}


bool MainWindow::eventFilter(QObject *target,
                             QEvent *ev)
{
    qDebug() << "Event Found: " << ev->type();
    if ( ev->type() == QEvent::KeyPress )
    {
        QKeyEvent *kev = static_cast<QKeyEvent *>(ev);
        if ( kev->key() == Qt::Key_A ) {
            QKeyEvent *e = new QKeyEvent(
                QEvent::KeyPress, Qt::Key_L, Qt::NoModifier, "@");

            qApp->postEvent(target, e);
            return true;
        }
    }
    return QMainWindow::eventFilter(target, ev);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething()
{
    ui->label->setText("Ouch!");
}
