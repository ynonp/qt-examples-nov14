#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(MyTask &task, QWidget *parent) :
    QMainWindow(parent),
    m_task(task),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(
                ui->pushButton, &QPushButton::clicked,
                &m_task, &MyTask::doIt);

    QObject::connect(
                &m_task, &MyTask::done,
                this, &MainWindow::updateText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateText(long value)
{
    ui->label->setText(QString("Done: %1").arg(value));
}
