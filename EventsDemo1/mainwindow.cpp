#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(
                ui->pushButton, &QPushButton::clicked,
                this, &MainWindow::doSomething);
}

bool MainWindow::event(QEvent *event)
{
    qDebug() << "Event! " << event->type();
    event->accept();
    event->ignore();

    QMouseEvent *mev = static_cast<QMouseEvent *>(event);
    return QMainWindow::event(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething() {
    long x = 0;

    for ( long i=0; i < 99999999999; i++ )
    {
        x += i;
    }

    ui->label->setText(QString("X = %1").arg(x));
}
