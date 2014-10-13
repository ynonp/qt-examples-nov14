#include "countworker.h"

CountWorker::CountWorker(QObject *parent) :
    QObject(parent)
{
}
void CountWorker::setCount(long count)
{
    _count = count;
}

void CountWorker::count()
{
    long sum;
    for ( long i=0; i < _count; i++ )
    {
        sum += i;
    }
    emit gotResult(sum);
}
