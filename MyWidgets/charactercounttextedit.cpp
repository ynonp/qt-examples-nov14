#include "charactercounttextedit.h"

CharacterCountTextEdit::CharacterCountTextEdit(QWidget *parent) :
    QWidget(parent)
{
    m_text = new QTextEdit();
    m_label = new QLabel("Characters Count: ");
    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(m_text);
    layout->addWidget(m_label);

    QObject::connect(m_text, &QTextEdit::textChanged,
                     this, &CharacterCountTextEdit::setLabelText);

    QObject::connect(m_text, &QTextEdit::textChanged,
                     this, &CharacterCountTextEdit::textChanged);

    setLabelText();

}


void CharacterCountTextEdit::setLabelText()
{
    int len = m_text->toPlainText().length();
    QString text = QString("Characters Count: %1").arg(len);

    if ( len > 140 )
    {
        emit textTooLong(len);
    }
    m_label->setText(text);
}






