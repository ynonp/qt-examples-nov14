#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.applicationDirPath();

    a.setOrganizationName("QtCourse");
    a.setOrganizationDomain("com.qtcourse");
    a.setApplicationName("Settings Demo");

    MainWindow w;
    w.show();

    return a.exec();
}
