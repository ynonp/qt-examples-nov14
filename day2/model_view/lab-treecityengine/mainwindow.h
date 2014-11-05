#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

class CityEngine;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    void setupTreeModel();
private:
    QStandardItemModel *m_model;
    CityEngine *m_engine;
    QTreeView *m_view;


};

#endif // MAINWINDOW_H
