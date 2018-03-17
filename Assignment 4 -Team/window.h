#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QFrame>
#include <QLabel>


//class QPushButton;
class window : public QWidget
{
    Q_OBJECT
public:
    explicit window(QWidget *parent = nullptr);    //explicit:
QPushButton* m_button=NULL; // because it is a pointer.

signals:

public slots:
};

#endif // WINDOW_H
