#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&rng, &RandomNumberGenerator::onNumber, this, &Dialog::newNumber);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_GenerateRandomNumber_clicked()
{


    QFuture<void> rngThread = QtConcurrent::run(&this->rng, &RandomNumberGenerator::start, QString("rngThread"));
}

void Dialog::newNumber(QString name, unsigned int num)
{
    qDebug() << "From dialog: " << name << " " << num;
    ui->lineEdit->setText(QString::number(num));
}
