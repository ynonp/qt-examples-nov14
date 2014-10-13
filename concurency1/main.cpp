#include "mainwindow.h"
#include <QApplication>
#include "countworker.h"
#include <QtConcurrent/QtConcurrent>

bool isPrime(long n)
{
    for ( long i=2; i < n/2; i++ )
    {
        if ( n % i == 0 ) return true;
    }
    return false;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<long> seq;
    QTime t1,t2;

    for (long i=2; i < 100000; i++ ) seq << i;

    t1.start();
    QtConcurrent::blockingFiltered(seq, isPrime);
    qDebug("Time elapsed (Multi): %d ms", t1.elapsed());

    t2.start();
    foreach ( long n, seq ) isPrime(n);
    qDebug("Time elapsed (Single): %d ms", t2.elapsed());


    return 0;
}

