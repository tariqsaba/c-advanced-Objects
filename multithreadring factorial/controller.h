#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QThread>
#include "factorialworker.h"

class Controller : public QObject
{
    Q_OBJECT
    QThread workerThread;
public:
    Controller();
    ~Controller();
public slots:

    void handleResultsFact(const int &result);

signals:

    void operateFact(const int &);

};

#endif // CONTROLLER_H
