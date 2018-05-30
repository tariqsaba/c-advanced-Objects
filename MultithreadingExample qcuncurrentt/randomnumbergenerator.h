#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include <QObject>
#include <QDebug>
#include <QThread>

class RandomNumberGenerator : public QObject
{
    Q_OBJECT
public:
    explicit RandomNumberGenerator(QObject *parent = nullptr);

    void start(QString name);

signals:
    void onNumber(QString name, unsigned int num);

public slots:

private:
    unsigned int CreateRandomNumber();
};

#endif // RANDOMNUMBERGENERATOR_H
