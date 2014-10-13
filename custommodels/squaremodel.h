#ifndef SQUAREMODEL_H
#define SQUAREMODEL_H

#include <QAbstractListModel>

class SquareModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit SquareModel(int count, int columns, QObject *parent = 0);

    virtual QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const;

    virtual int 	rowCount ( const QModelIndex & parent = QModelIndex() ) const;
    virtual int 	columnCount ( const QModelIndex & parent = QModelIndex() ) const;

    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    virtual Qt::ItemFlags flags(const QModelIndex &index) const;
    virtual bool setData(const QModelIndex &index, const QVariant &value, int role);

private:
    int _count;
    int _columns;
    QList<int> _numbers;
};

#endif // SQUAREMODEL_H
