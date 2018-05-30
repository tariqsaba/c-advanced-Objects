#include "controller.h"
#include <QDebug>

Controller::Controller()
{
    FactorialWorker *factWorker = new FactorialWorker;
    factWorker->moveToThread(&workerThread);

    connect(&workerThread, &QThread::finished, factWorker, &QObject::deleteLater);
    connect(this, &Controller::operateFact, factWorker, &FactorialWorker::doWork);
    connect(factWorker, &FactorialWorker::resultReady, this, &Controller::handleResultsFact);
    workerThread.start();
}


void Controller::handleResultsFact(const int &result)
{
    qDebug() << "Printed from handleResultsInt: " << result;
}

Controller::~Controller()
{
    workerThread.quit();
    workerThread.wait();
}
