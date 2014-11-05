#ifndef MATHMODEL_H
#define MATHMODEL_H

#include <QObject>
#include <QAbstractListModel>

class MathModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit MathModel(int count, QObject *parent = 0);

protected:
    virtual int columnCount(const QModelIndex &parent) const;
    virtual int rowCount(const QModelIndex &parent) const;
    virtual QVariant data(const QModelIndex &index, int role) const;
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    virtual Qt::ItemFlags flags(const QModelIndex &index) const;
    virtual bool setData(const QModelIndex &index, const QVariant &value, int role);

signals:

public slots:

private:
    int m_count;
    QList<int>  m_firstColumn;
};

#endif // MATHMODEL_H
