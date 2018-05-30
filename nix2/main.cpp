#include <QCoreApplication>
#include <QtCore>
#include <QThread>
#include <QDebug>
#include "controller.h"
#include "factorialworker.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int test = 9;

    qDebug() << "Int to be used: " << test;
    qDebug() << "9!:";

    Controller myController1;
    emit myController1.operateFact(test);

    Controller myController2;
    emit myController2.operateFact(test);

    Controller myController3;
    emit myController2.operateFact(test);

    return a.exec();
}
