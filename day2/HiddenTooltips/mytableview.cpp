#include "mytableview.h"
#include <QtWidgets>
#include <QDebug>
MyTableView::MyTableView(QWidget *parent) :
    QTableView(parent)
{
}

bool MyTableView::viewportEvent(QEvent * event)
{
    if ( event->type() == QEvent::ToolTip )
    {
        qDebug() << "3";
        QHelpEvent *hev = static_cast<QHelpEvent *>(event);
        int col = columnAt(hev->x());
        int row = rowAt(hev->y());

        qDebug() << "col = " << col << ", row = " << row;

        QModelIndex idx = model()->index(row, col, QModelIndex());
        QString text = idx.data().toString();
        QFont font = viewOptions().font;
        QFontMetrics fm(font);
        int requiredWidth = fm.width(text);

        qDebug() << "require width = " << requiredWidth;
        qDebug() << "col width = " << columnWidth(col);

        if ( columnWidth(col) > requiredWidth )
        {
            // don't show the tooltip if all text is visible
            return true;
        }
    }
    return QTableView::viewportEvent(event);
}
