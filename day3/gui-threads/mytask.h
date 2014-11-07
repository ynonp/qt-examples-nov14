#ifndef MYTASK_H
#define MYTASK_H

#include <QObject>

class MyTask : public QObject
{
    Q_OBJECT
public:
    explicit MyTask(QObject *parent = 0);

public slots:
    void doIt();

signals:
    void done(long val);

public slots:

private:
    long m_value;
};

#endif // MYTASK_H
