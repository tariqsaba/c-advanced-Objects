#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QtConcurrent>
#include "randomnumbergenerator.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_GenerateRandomNumber_clicked();

public slots:
    void newNumber(QString name, unsigned int num);
private:
    Ui::Dialog *ui;
    RandomNumberGenerator rng;
};

#endif // DIALOG_H
