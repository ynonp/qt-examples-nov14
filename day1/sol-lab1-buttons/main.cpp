#include <QtCore>
#include <QtGui>
#include <QtWidgets>

void createFirstRow(QVBoxLayout *top)
{
    QGroupBox *box = new QGroupBox();
    QPushButton *b1 = new QPushButton("One", box);
    QPushButton *b2 = new QPushButton("Two", box);
    QPushButton *b3 = new QPushButton("Three", box);

    QHBoxLayout *layout = new QHBoxLayout(box);

    layout->addWidget(b1);
    layout->addWidget(b2);
    layout->addWidget(b3);

    top->addWidget(box);
}

void createSecondRow(QVBoxLayout *top)
{
    QGroupBox *box = new QGroupBox();
    QPushButton *b1 = new QPushButton("One", box);
    QPushButton *b2 = new QPushButton("Two", box);
    QPushButton *b3 = new QPushButton("Three", box);

    QHBoxLayout *layout = new QHBoxLayout(box);

    layout->addWidget(b1, 2);
    layout->addWidget(b2, 1);
    layout->addWidget(b3, 1);

    top->addWidget(box);
}

void createThirdRow(QVBoxLayout *top)
{
    QGroupBox *box = new QGroupBox();
    QPushButton *b1 = new QPushButton("One", box);
    QPushButton *b2 = new QPushButton("Two", box);
    QPushButton *b3 = new QPushButton("Three", box);

    QHBoxLayout *layout = new QHBoxLayout(box);

    layout->addWidget(b1, 2);
    layout->addWidget(b2);
    layout->addWidget(b3);

    top->addWidget(box);
}

void createFourthRow(QVBoxLayout *top)
{
    QGroupBox *box = new QGroupBox();
    QPushButton *b1 = new QPushButton("One", box);
    QPushButton *b2 = new QPushButton("Two", box);
    QPushButton *b3 = new QPushButton("Three", box);

    QHBoxLayout *layout = new QHBoxLayout(box);

    layout->addWidget(b1);
    layout->addWidget(b2);
    layout->addWidget(b3);
    layout->addStretch(1);

    top->addWidget(box);
}

void createFifthRow(QVBoxLayout *top)
{
    QGroupBox *box = new QGroupBox();
    QPushButton *b1 = new QPushButton("One", box);
    QPushButton *b2 = new QPushButton("Two", box);
    QPushButton *b3 = new QPushButton("Three", box);
    QHBoxLayout *layout = new QHBoxLayout(box);


    layout->addWidget(b1);
    layout->addStretch(4);
    layout->addWidget(b2);
    layout->addStretch(4);
    layout->addWidget(b3);

    top->addWidget(box);
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget w;

    QVBoxLayout *layout = new QVBoxLayout(&w);
    createFirstRow(layout);
    createSecondRow(layout);
    createThirdRow(layout);
    createFourthRow(layout);
    createFifthRow(layout);

    QList<QPushButton *> buttons = w.findChildren<QPushButton *>();
    for (QPushButton *btn  : buttons)
    {
        btn->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
    }


    w.show();

    return a.exec();
}









