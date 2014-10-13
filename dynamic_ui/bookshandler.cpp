#include "bookshandler.h"
#include <QDebug>
#include <QUiLoader>
#include <QtWidgets>

BooksHandler::BooksHandler(QWidget *target)
    :_target(target)
{
    _target->setLayout(new QVBoxLayout());
}

void BooksHandler::createNextLabel()
{
    QUiLoader l;
    QLabel *next = qobject_cast<QLabel *>(l.createWidget("QLabel", _target, _name));
    next->setText(QString("%1, %2").arg(_title).arg(_price));
    _target->layout()->addWidget(next);
}

bool BooksHandler::endElement(const QString & namespaceURI, const QString & localName, const QString & qName)
{
    if ( localName == "price" )
    {
        _price = _chars;
    }
    else if ( localName == "title" )
    {
        _title = _chars;
    }
    else if ( localName == "book" )
    {
        // now we have the values for:
        // _name, _title, _price
        createNextLabel();
    }

    return true;
}

bool BooksHandler::startElement(const QString & namespaceURI, const QString & localName, const QString & qName, const QXmlAttributes & atts)
{
    _chars = "";
    if ( localName == "book" )
    {
        _name = atts.value("name");
    }

    return true;
}

bool BooksHandler::characters(const QString & ch)
{
    _chars += ch;
    return true;
}
