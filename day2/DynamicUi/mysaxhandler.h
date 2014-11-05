#ifndef MYSAXHANDLER_H
#define MYSAXHANDLER_H

#include <QtCore>
#include <QXmlDefaultHandler>

class QWidget;
class QVBoxLayout;

class MySaxHandler : public QXmlDefaultHandler
{
public:
    MySaxHandler(QWidget *target);

    virtual bool startElement 
( const QString & namespaceURI, const QString & localName, const
    QString & qName, const QXmlAttributes & atts );

    virtual bool endElement 
( const QString & namespaceURI, const QString & localName, const QString & qName );

    virtual bool characters ( const QString & ch );

private:
    QString m_currentBookName;
    QString m_currentValue;
    QWidget *m_target;
    QVBoxLayout *m_layout;
};

#endif // MYSAXHANDLER_H
