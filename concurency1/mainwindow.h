#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void calcSync();

    void startCalcAsync();
    void calcAsyncValue();
    void endCalcAsync();


private:
    Ui::MainWindow *ui;
    QTimer _timer;
    long _sum = 0;
    long _next = 0;
};

#endif // MAINWINDOW_H
