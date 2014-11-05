#include "mainwindow.h"

#include "cityengine.h"
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    m_engine = new CityEngine(this);
    m_model = new QStandardItemModel(this);

    setupTreeModel();
    // TASK: You will need a view to display the model
    m_view = new QTreeView(this);
    m_view->setModel(m_model);
    setCentralWidget(m_view);
}

void MainWindow::setupTreeModel()
{
    // TASK: Implement a tree model with standarditem model, displaying countries with their largest cities
    // The column header shall display "Country / City", "Population", "Area"
    QStringList countires = m_engine->countries();
    m_model->setHorizontalHeaderLabels(m_engine->headers());

    foreach (QString country, countires)
    {
        QStandardItem *countryItem = new QStandardItem(country);
        QStringList cities = m_engine->citiesByCountry(country);
        foreach (QString city, cities )
        {
            QStandardItem *cityName = new QStandardItem(city);
            QStandardItem *cityPopulation = new QStandardItem(QString::number(m_engine->population(city)));
            QStandardItem *cityArea = new QStandardItem(QString::number(m_engine->area(city)));

            QList<QStandardItem *> columns;
            
            columns << cityName << new QStandardItem(country) << cityPopulation << cityArea;

            countryItem->appendRow(columns);
        }

        countryItem->setData(m_engine->flag(country),
                             Qt::DecorationRole);
        m_model->appendRow(countryItem);
    }

}









