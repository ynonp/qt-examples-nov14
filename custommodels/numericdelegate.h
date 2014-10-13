#ifndef NUMERICDELEGATE_H
#define NUMERICDELEGATE_H
#include <QtGui>
#include <QtCore>

#include <QStyledItemDelegate>

class NumericDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit NumericDelegate(QObject *parent = 0);

protected:
    virtual QWidget * 	createEditor ( QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index ) const;
    virtual void 	setEditorData ( QWidget * editor, const QModelIndex & index ) const;
    virtual void 	setModelData ( QWidget * editor, QAbstractItemModel * model, const QModelIndex & index ) const;
    virtual void 	updateEditorGeometry ( QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index ) const;


};

#endif // NUMERICDELEGATE_H
