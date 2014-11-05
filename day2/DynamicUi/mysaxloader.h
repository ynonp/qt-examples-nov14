#ifndef MYSAXLOADER_H
#define MYSAXLOADER_H

#include <QObject>
#include "mysaxhandler.h"
class QWidget;

class MySaxLoader : public QObject
{
    Q_OBJECT
public:
    explicit MySaxLoader(QObject *parent = 0);

    QWidget *load(QIODevice *io, QWidget *target);

signals:

public slots:

};

#endif // MYSAXLOADER_H
