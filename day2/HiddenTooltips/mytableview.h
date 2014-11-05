#ifndef MYTABLEVIEW_H
#define MYTABLEVIEW_H

#include <QTableView>

class MyTableView : public QTableView
{
    Q_OBJECT
public:
    explicit MyTableView(QWidget *parent = 0);

protected:
    virtual bool viewportEvent(QEvent * event);

signals:


public slots:

};

#endif // MYTABLEVIEW_H
