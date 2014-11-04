#ifndef MYFILECHOOSER_H
#define MYFILECHOOSER_H

#include <QWidget>

namespace Ui {
class MyFileChooser;
}

class MyFileChooser : public QWidget
{
    Q_OBJECT

public:
    explicit MyFileChooser(QWidget *parent = 0);
    ~MyFileChooser();

private slots:
    void chooseFile();

private:
    Ui::MyFileChooser *ui;
};

#endif // MYFILECHOOSER_H








