#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include "countworker.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(CountWorker &worker, QWidget *parent = 0);
    ~MainWindow();
public slots:

    void startCalcAsync();
    void calcAsyncValue();
    void endCalcAsync();

    void endCalcSync(long result);


private:
    Ui::MainWindow *ui;
    QTimer _timer;
    long _sum = 0;
    long _next = 0;
    CountWorker &_worker;
};

#endif // MAINWINDOW_H
