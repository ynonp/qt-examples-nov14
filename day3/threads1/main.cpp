#include <QCoreApplication>
#include <QtCore>

class ThreadSafeCounter
{
public:
    ThreadSafeCounter() : n(0) { }
    void inc() {
        QMutexLocker l(&_lock);
        n++;
    }

    void dec() {
        QMutexLocker l(&_lock);
        n--;
    }
    int  val() { return n; }

private:
    QMutex _lock;
    int n;
};


class Counter
{
public:
    Counter() : n(0) { }
    void inc() { n++; }
    void dec() { n--; }
    int  val() { return n; }

private:
    int n;
};

class MyTask : public QRunnable
{
public:
//    MyTask(Counter &counter) : _counter(counter) { }
    MyTask(ThreadSafeCounter &counter) : _counter(counter) { }
    virtual void run()
    {
        for ( long i=0; i < 100000; i++ )
        {
            _counter.inc();
            _counter.dec();
        }
    }
private:
//    Counter &_counter;
    ThreadSafeCounter &_counter;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThreadPool pool;
//     Counter c;
    ThreadSafeCounter c;

    pool.start(new MyTask(c));
    pool.start(new MyTask(c));
    pool.start(new MyTask(c));
    pool.start(new MyTask(c));
    pool.start(new MyTask(c));
    pool.start(new MyTask(c));

    pool.waitForDone();

    qDebug() << "Val = " << c.val();


    return 0;
}









