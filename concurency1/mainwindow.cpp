#include "mainwindow.h"
#include "ui_mainwindow.h"

const long kCount = 999999999;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(&_timer, &QTimer::timeout, this, &MainWindow::calcAsyncValue);
    QObject::connect(ui->btn_async, &QPushButton::clicked, this, &MainWindow::startCalcAsync);
    QObject::connect(ui->btn_sync, &QPushButton::clicked, this, &MainWindow::calcSync);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calcSync()
{
    long sum = 0;
    for(long i=0; i < kCount; i++ )
    {
        sum += i;
    }
    ui->label->setText(QString("Result: %1").arg(sum));
}

void MainWindow::startCalcAsync()
{
    if ( _timer.isActive() )
    {
        qDebug() << "Timer already active. You'll need to wait till calculation finishes";
        return;
    }

    _timer.start(0);
    _sum = 0;
}

void MainWindow::calcAsyncValue()
{
    for ( int i=0; i < 100000 && _next < kCount; i++ )
    {
        _sum += _next++;
    }
    if ( _next >= kCount )
    {
        endCalcAsync();
    }
    if ( _next % 10000 == 0 )
    {
        qDebug() << "_next = " << _next << "sum = " << _sum;
    }
}

void MainWindow::endCalcAsync()
{
    _timer.stop();
    ui->label->setText(QString("Result: %1").arg(_sum));
}
