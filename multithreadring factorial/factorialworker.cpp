#include "factorialworker.h"
#include <QMutex>

void FactorialWorker::doWork(const int &parameter)
{
    QMutex mutex;
    mutex.lock();
    int collector = 1;
    for (int i = 1; i <= parameter; i++)
    {
        collector *= i;
    }
    emit resultReady(collector);
    mutex.unlock();
}
