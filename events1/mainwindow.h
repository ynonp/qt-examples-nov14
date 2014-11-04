#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void doSomething();

    virtual bool eventFilter(QObject *target,
                             QEvent *ev);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
