#ifndef COUNTWORKER_H
#define COUNTWORKER_H

#include <QObject>

class CountWorker : public QObject
{
    Q_OBJECT
public:
    explicit CountWorker(QObject *parent = 0);
    void setCount(long count);

signals:
    void gotResult(long result);

public slots:
    void count();

private:
    long _count;
};

#endif // COUNTWORKER_H
