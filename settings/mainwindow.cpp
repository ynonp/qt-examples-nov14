#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>

const QString kSettingGeometry = "geometry";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readPosition();
}

MainWindow::~MainWindow()
{
    writePosition();
    delete ui;
}

void MainWindow::writePosition()
{
    QSettings settings;
    settings.setValue(kSettingGeometry, geometry());
}

void MainWindow::readPosition()
{
    QSettings settings;
    QVariant geo = settings.value(kSettingGeometry);
    if ( geo.isValid() )
    {
        setGeometry(geo.toRect());
    }
}
