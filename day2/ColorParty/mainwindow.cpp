#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setBlurRadius(2);
    effect->setColor(QColor::fromRgba(qRgba(0, 0, 0, 60)));
    effect->setYOffset(4);
    effect->setXOffset(4);
    ui->pushButton->setGraphicsEffect(effect);
}

MainWindow::~MainWindow()
{
    delete ui;
}
