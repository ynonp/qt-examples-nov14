#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSettings settings;

    QVariant val = settings.value("Geometry",
                                  QRect(50, 50, 200, 200));
    setGeometry(val.toRect());
}

MainWindow::~MainWindow()
{
    delete ui;

    QSettings settings;
    settings.setValue("Geometry", geometry());

}
