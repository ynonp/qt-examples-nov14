#include "mysaxhandler.h"
#include <QtWidgets>
#include <QUiLoader>

MySaxHandler::MySaxHandler(QWidget *target):
    m_target(target)
{
    QUiLoader l;
    m_layout = static_cast<QVBoxLayout *>(l.createLayout("QVBoxLayout", target));
}

bool MySaxHandler::startElement
( const QString & namespaceURI, const QString & localName, const
    QString & qName, const QXmlAttributes & atts )
{
    if ( qName == "book" )
    {
        m_currentBookName = atts.value("name");
    }
    return QXmlDefaultHandler::startElement(namespaceURI,
                                            localName,
                                            qName,
                                            atts);
}

bool MySaxHandler::endElement
( const QString & namespaceURI, const QString & localName, const QString & qName )
{
    if ( qName == "title" )
    {
        QUiLoader l;
        QLabel *w = qobject_cast<QLabel *>(l.createWidget("QLabel",
                       m_target,
                       m_currentBookName + "_label"));
        w->setText(m_currentValue);
        m_layout->addWidget(w);
    }

    else if ( qName == "price" )
    {
        QUiLoader l;
        QSpinBox *w = qobject_cast<QSpinBox *>(l.createWidget(
                    "QSpinBox",
                    m_target,
                    m_currentBookName + "_price"
                    ));
        w->setValue(m_currentValue.toInt());
        m_layout->addWidget(w);
    }

    return QXmlDefaultHandler::endElement(
                namespaceURI, localName, qName);
}

bool MySaxHandler::characters ( const QString & ch )
{
    m_currentValue = ch;
    return QXmlDefaultHandler::characters(ch);
}









