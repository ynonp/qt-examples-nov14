#ifndef BOOKSTORELOADERDOM_H
#define BOOKSTORELOADERDOM_H

#include <QObject>
class QIODevice;
class QWidget;

class BookstoreLoaderDOM : public QObject
{
    Q_OBJECT
public:
    explicit BookstoreLoaderDOM(QObject *parent = 0);
    void load(QIODevice *input, QWidget *target);

signals:

public slots:

};

#endif // BOOKSTORELOADERDOM_H
