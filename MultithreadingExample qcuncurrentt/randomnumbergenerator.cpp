#include "randomnumbergenerator.h"
#include <QTime>
#include <QDebug>

RandomNumberGenerator::RandomNumberGenerator(QObject *parent) : QObject(parent)
{

}

void RandomNumberGenerator::start(QString name)
{
    //generate the number
    emit onNumber(name, CreateRandomNumber());
}

unsigned int RandomNumberGenerator::CreateRandomNumber()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    for (int i = 0; i < (qrand() % 1000); i++)
    {
        qDebug() << "Sequencing Random Number, count " << i << " : " << qrand();
    }

    return qrand();
}
