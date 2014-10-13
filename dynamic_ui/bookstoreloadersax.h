#ifndef BOOKSTORELOADERSAX_H
#define BOOKSTORELOADERSAX_H

#include <QObject>
#include <QIODevice>

class BookstoreLoaderSax : public QObject
{
    Q_OBJECT
public:
    explicit BookstoreLoaderSax(QObject *parent = 0);
    void load(QIODevice *input, QWidget *target);

signals:

public slots:

};

#endif // BOOKSTORELOADERSAX_H
