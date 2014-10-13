#include "bookstoreloadersax.h"
#include "bookshandler.h"

#include <QtXml>

BookstoreLoaderSax::BookstoreLoaderSax(QObject *parent) :
    QObject(parent)
{
}


void BookstoreLoaderSax::load(QIODevice *input, QWidget *target)
{

    QXmlInputSource xmlIn(input);
    BooksHandler handler(target);
    QXmlSimpleReader reader;
    reader.setContentHandler(&handler);
    reader.parse(&xmlIn);
}
