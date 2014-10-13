#include "squaremodel.h"
#include <QtCore>

SquareModel::SquareModel(int count, int columns,QObject *parent) :
    _count(count),
    _columns(columns),
    QAbstractTableModel(parent)
{
    // initialise the base list
    for ( int i=0; i < count; i++ ) {
        _numbers << i;
    }
}

Qt::ItemFlags SquareModel::flags(const QModelIndex &index) const
{
    if ( index.column() == 0 ) {
        return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
    }
    return QAbstractTableModel::flags(index);
}

bool SquareModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if ( index.column() == 0 )
    {
        if ( role == Qt::EditRole )
        {
            bool ok = false;
            int val = value.toInt(&ok);
            if ( ok )
            {
                _numbers[index.row()] = val;
                emit dataChanged(index, index);
                return true;
            }
        }
    }

    return false;
}

QVariant SquareModel::data ( const QModelIndex & index, int role ) const
{
    if ( index.row() <= _count )
    {
        if ( role == Qt::DisplayRole )
        {
            int base = _numbers[index.row()];
            return QString::number(qPow(base, index.column() + 1));
        }
        else
        {
            return QVariant::Invalid;
        }
    }
    else
    {
        return QVariant::Invalid;
    }
}

QVariant SquareModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ( orientation == Qt::Horizontal )
    {
        if ( role == Qt::DisplayRole )
        {
            return QString("^ %1").arg(section + 1);
        }
    }
    return QVariant::Invalid;
}

int 	SquareModel::rowCount ( const QModelIndex & parent ) const
{
    return _count;
}

int 	SquareModel::columnCount ( const QModelIndex & parent ) const
{
    return _columns;
}
