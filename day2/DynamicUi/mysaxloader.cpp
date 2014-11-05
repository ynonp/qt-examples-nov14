#include "mysaxloader.h"
#include <QtWidgets>
#include <QtCore>

MySaxLoader::MySaxLoader(QObject *parent) :
    QObject(parent)
{
}

QWidget *MySaxLoader::load(
        QIODevice *io,
        QWidget *target)
{
    QXmlSimpleReader reader;
    MySaxHandler handler(target);
    reader.setContentHandler(&handler);

    QXmlInputSource xml(io);

    reader.parse(xml);
    return target;
}
