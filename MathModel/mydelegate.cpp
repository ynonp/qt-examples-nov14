#include "mydelegate.h"
#include <QtWidgets>

MyDelegate::MyDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

QWidget *MyDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return new QSpinBox(parent);
}

void MyDelegate::setEditorData(QWidget *editor,
                               const QModelIndex &index) const
{
    QSpinBox *spin = qobject_cast<QSpinBox *>(editor);
    if ( spin )
    {
        int val = index.data().toInt();
        spin->setValue(val);
    }
}

void MyDelegate::setModelData(QWidget *editor,
                              QAbstractItemModel *model,
                              const QModelIndex &index) const
{
    QSpinBox *spin = qobject_cast<QSpinBox *>(editor);
    int val = spin->value();
    model->setData(index, val);
}

void MyDelegate::updateEditorGeometry(
        QWidget *editor,
        const QStyleOptionViewItem &option,
        const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}






