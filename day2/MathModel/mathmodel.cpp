#include "mathmodel.h"
#include <QtCore>

Qt::ItemFlags MathModel::flags(
        const QModelIndex &index) const
{
    if ( index.column() == 0 )
    {
        return QAbstractTableModel::flags(index) | Qt::ItemIsEditable;
    }
    else
    {
        return QAbstractTableModel::flags(index);
    }
}

bool MathModel::setData(
        const QModelIndex &index,
        const QVariant &value,
        int role)
{
    int pos = index.row();
    m_firstColumn[pos] = value.toInt();
    return true;
}

MathModel::MathModel(int count, QObject *parent) :
    QAbstractTableModel(parent),
    m_count(count)
{
    for ( int i=0; i < count; i++ )
    {
        m_firstColumn << i;
    }
}

int MathModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_count;
}
QVariant MathModel::headerData(
        int section,
        Qt::Orientation orientation,
        int role) const
{
    if ( orientation == Qt::Horizontal )
    {
        if ( role == Qt::DisplayRole )
        {
            if ( section == 0 )
            {
                return "Value";
            }
            else
            {
                return QString("Value ^ %1").arg(section + 1);
            }
        }
    }
    return QVariant::Invalid;
}

int MathModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 3;
}

QVariant MathModel::data(const QModelIndex &index, int role) const
{
    qDebug() << "Request for data: " << index;
    if ( index.row() < m_count )
    {
        if ( role == Qt::DisplayRole )
        {
            int base = m_firstColumn.at(index.row());
            qreal val = qPow(base, index.column() + 1);
            return QVariant(QString::number(val));
        }
    }
    return QVariant::Invalid;
}















