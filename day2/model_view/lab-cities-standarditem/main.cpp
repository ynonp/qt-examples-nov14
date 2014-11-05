#include <QDebug>
#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQuickView>
#include <QStandardItemModel>

#include "citymodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQuickView viewer;
    CityModel model;

    viewer.engine()->rootContext()->setContextProperty("_model", &model);
    viewer.setSource(QUrl("qrc:///main.qml"));
    viewer.show();

    return app.exec();
}
