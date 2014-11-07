#include "mytask.h"

MyTask::MyTask(QObject *parent) :
    QObject(parent),
    m_value(0)
{
}

void MyTask::doIt()
{
    for ( long i=0; i < 9999999999; i++ )
    {
        m_value++;
    }

    emit done(m_value);
}
