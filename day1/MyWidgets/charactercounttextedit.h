#ifndef CHARACTERCOUNTTEXTEDIT_H
#define CHARACTERCOUNTTEXTEDIT_H

#include <QWidget>
#include <QtWidgets>

class CharacterCountTextEdit : public QWidget
{
    Q_OBJECT
public:
    explicit CharacterCountTextEdit(QWidget *parent = 0);

signals:
    void textTooLong(int textSize);
    void textChanged();

private slots:
    void setLabelText();

private:
    QTextEdit *m_text;
    QLabel *m_label;
};

#endif // CHARACTERCOUNTTEXTEDIT_H
