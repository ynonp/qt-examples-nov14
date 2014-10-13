#ifndef BOOKSHANDLER_H
#define BOOKSHANDLER_H

#include <QXmlDefaultHandler>
class QWidget;

class BooksHandler : public QXmlDefaultHandler
{
public:
    BooksHandler(QWidget *target);

protected:
    virtual bool	endElement(const QString & namespaceURI, const QString & localName, const QString & qName);
    virtual bool	startElement(const QString & namespaceURI, const QString & localName, const QString & qName, const QXmlAttributes & atts);
    virtual bool	characters(const QString & ch);

private:
    createNextLabel();

private:
    QString _chars;
    QString _name;
    QString _price;
    QString _title;
    QWidget *_target;
};

#endif // BOOKSHANDLER_H
