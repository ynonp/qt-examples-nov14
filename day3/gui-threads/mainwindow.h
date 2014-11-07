#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mytask.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(MyTask &task,QWidget *parent = 0);
    ~MainWindow();
public:
    void updateText(long value);

private:
    Ui::MainWindow *ui;
    MyTask &m_task;
};

#endif // MAINWINDOW_H
