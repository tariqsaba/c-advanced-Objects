/*
 Project's Code,
QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

QT += core concurrent

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp

 */

//----------------------

#include <QCoreApplication>
#include <QDebug>
#include <QtConcurrent>
#include <iostream>
#include <QFuture>
#include <functional>

using namespace QtConcurrent;
using namespace std;


double additiveSeries(int n);
int fib(int userInput);

//QFuture<void> futureWatcher3 =QtConcurrent::run([maxVal]();

const int maxVal =10;
int main(int argc, char *argv[])
{
    int n = 15;
   // int userInput;
    QCoreApplication a(argc, argv);


    QFuture<void> additiveResult = QtConcurrent::run(additiveSeries, n);     //additiveSeries(n)

  //  QFuture<void> fibonacciLoopResult = QtConcurrent::run(fib, userInput);
    QFuture<void> futureWatcher3 =QtConcurrent::run([maxVal]()
        {
            qDebug() << "Starting Fibonacci 1...";
            int final_fib = fib(maxVal);
            qDebug() << "Fibonacci 1... Done: "<< final_fib;
        });
     QFuture<void> fib22 =QtConcurrent ::run(fib,n);

    additiveResult.waitForFinished();
    fib22.waitForFinished();
    futureWatcher3.waitForFinished();


    return a.exec();
}



//an additive series that adds 1/1 + 1/2 + 1/3+...+1/n,
//where n is passed in

double additiveSeries(int n)
{
    double sum =0;
    for(int i=1; i<n; i++)
    {
        if (i != 0)
            sum =sum + 1.0/i;
    }
    qDebug() << sum ;
    return sum;
}

//fibonacci/
/*
 * idk what is wrong in here.
int fibonacciLoop(int userInput)
{
    int x=1;
    int y=1;
    int sum= 0;
   //int userInput;
    //cin>> userInput;

    if(userInput =='1')
    {
        sum =1;
        cout << sum << endl;
    }
    else
    {
        for (int i=0; i<userInput; i++)
        {
         sum = x+y;
         x=y;
         y = y+x;
        }
    }
    cout << sum << endl;
    return sum;

}
*/


int fib(int userInput)
{
   if (userInput <= 1)
   {
    return userInput;
   }

   return fib(userInput-1) + fib(userInput-2);
}

bool isPrime(int number)
{
    for (int i=2; i*i<=number; i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}

QFuture<void> futureWatcher3 =QtConcurrent::run([maxVal]()
   {
       qDebug() << "Starting Prime  ";
      int prime,cntPrime =0;

          int i;
          if (maxVal == 1)
          {
              qDebug() << "Prime 3... 2"; // shoof kaman mara
              prime = 2;  //if N is equal to 1
          }

          for (i = 3; ; i += 2)
          {
              if (isPrime(i))
              {
                  qDebug() << "Prime 3..."<<i;
                  cntPrime++;
                  if (cntPrime == (maxVal - 1))
                  {

                      prime = i;
                      break;
                  }
              }
          }

          qDebug() << "Prime 3... Done: " <<prime;
           });

