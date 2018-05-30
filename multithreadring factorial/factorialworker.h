#ifndef FACTORIALWORKER_H
#define FACTORIALWORKER_H

#include <QObject>
#include <QDebug>

class FactorialWorker : public QObject
{
    Q_OBJECT
public slots:
    void doWork(const int &);
signals:
    void resultReady(const int &result);
};

#endif // FACTORIALWORKER_H
