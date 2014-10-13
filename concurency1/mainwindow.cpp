#include "mainwindow.h"
#include "ui_mainwindow.h"

const long kCount = 999999999;

MainWindow::MainWindow(CountWorker &worker, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _worker(worker)
{
    _worker.setCount(kCount);

    ui->setupUi(this);
    QObject::connect(&_timer, &QTimer::timeout, this, &MainWindow::calcAsyncValue);
    QObject::connect(ui->btn_async, &QPushButton::clicked, this, &MainWindow::startCalcAsync);
    QObject::connect(ui->btn_sync, &QPushButton::clicked, &_worker, &CountWorker::count);
    QObject::connect(&_worker, &CountWorker::gotResult, this, &MainWindow::endCalcSync);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::endCalcSync(long result)
{
    ui->label->setText(QString("Result: %1").arg(result));
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
