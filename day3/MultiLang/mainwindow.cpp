#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(
                ui->pushButton, &QPushButton::clicked,
                this, &MainWindow::aliensAttacked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::aliensAttacked()
{
    ui->label->setText(tr("I have %n apple(s)", "buying apples", 5));
}
