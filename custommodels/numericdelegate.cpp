#include "numericdelegate.h"
#include <QtWidgets>

NumericDelegate::NumericDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

QWidget * 	NumericDelegate::createEditor ( QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index ) const
{
    return new QSpinBox(parent);
}

void 	NumericDelegate::setEditorData ( QWidget * editor, const QModelIndex & index ) const
{
    QSpinBox *spin = qobject_cast<QSpinBox *>(editor);
    spin->setValue(index.data().toInt());
}

void 	NumericDelegate::setModelData ( QWidget * editor, QAbstractItemModel * model, const QModelIndex & index ) const
{
    QSpinBox *spin = qobject_cast<QSpinBox *>(editor);
    int value = spin->value();
    model->setData(index, value);
}

void 	NumericDelegate::updateEditorGeometry ( QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index ) const
{
    editor->setGeometry(option.rect);
}
