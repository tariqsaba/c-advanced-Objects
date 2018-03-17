#include "window.h"

window::window(QWidget *parent) : QWidget(parent)
{
setFixedSize(300,520)    ;// for the actual window

QLabel *label = new QLabel(this);
label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
label->setText("UserName");
label->setGeometry(0,0,85,30);

QLabel *label1 = new QLabel(this);
label1->setFrameStyle(QFrame::Panel | QFrame::Sunken);
label1->setText(" account number");
label1->setGeometry(0,80,85,30);

QLabel *label2 = new QLabel(this);
label2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
label2->setText("account balance");
label2->setGeometry(0,160,85,30);


//---------------------------------------------------------------------
m_button = new QPushButton ("Choose a saving account", this);
m_button -> setGeometry (100,0,140,30);

m_button = new QPushButton ("Choose a checking account", this);
m_button -> setGeometry (100,80,140,30);


m_button = new QPushButton (" Deposit", this);
m_button -> setGeometry (100,160,85,30);

m_button = new QPushButton ("Withdraw", this);
m_button -> setGeometry (100,240,85,30);

m_button = new QPushButton ("Transfer", this);
m_button -> setGeometry (100,320,85,30);

m_button = new QPushButton ("Transaction History", this);
m_button -> setGeometry (100,400,105,30);




}


