#include "bookstoreloaderdom.h"
#include <QtCore>
#include <QtXml>
#include <QtWidgets>
#include <QUiLoader>

BookstoreLoaderDOM::BookstoreLoaderDOM(QObject *parent) :
    QObject(parent)
{
}

void BookstoreLoaderDOM::load(QIODevice *input, QWidget *target)
{
    QDomDocument doc;
    doc.setContent(input);

    target->setLayout(new QVBoxLayout());

    QDomNodeList books = doc.elementsByTagName("book");

    QUiLoader l;

    for ( int i=0; i < books.count(); ++i )
    {
        QDomElement book = books.at(i).toElement();
        QString name = book.attribute("name");

        QString price = book.elementsByTagName("price").at(0).toElement().text();
        QString title = book.elementsByTagName("title").at(0).toElement().text();

        QLabel *label = qobject_cast<QLabel *>(l.createWidget("QLabel", target, name));
        label->setText(QString("%1, %2").arg(title).arg(price));
        target->layout()->addWidget(label);
    }

}
