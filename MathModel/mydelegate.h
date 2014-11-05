#ifndef MYDELEGATE_H
#define MYDELEGATE_H

#include <QStyledItemDelegate>

class MyDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit MyDelegate(QObject *parent = 0);

public:
    virtual QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    virtual void	setEditorData(QWidget * editor, const QModelIndex & index) const;
    virtual void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
    virtual void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;

signals:

public slots:

};

#endif // MYDELEGATE_H
