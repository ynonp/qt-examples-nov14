#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLocale locale;
    qDebug() << locale.language();

    return a.exec();
}
