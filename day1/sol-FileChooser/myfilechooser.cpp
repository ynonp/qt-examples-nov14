#include "myfilechooser.h"
#include "ui_myfilechooser.h"
#include <QtWidgets>

MyFileChooser::MyFileChooser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyFileChooser)
{
    ui->setupUi(this);

    QObject::connect(
                ui->btnChooseFile, &QPushButton::clicked,
                this, &MyFileChooser::chooseFile );
}

MyFileChooser::~MyFileChooser()
{
    delete ui;
}

void MyFileChooser::chooseFile()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                 tr("Choose a file"));

    if ( ! filename.isEmpty() )
    {
        ui->edtFileName->setText(filename);
    }
}












