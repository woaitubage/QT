#include <QCoreApplication>
#include <QDebug>
#include "mythread.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread mThread;
    qDebug()<<"GUI thread before MyThread start()"
             <<a.thread()->currentThread();


    qDebug()<<"GUI thread after start()"
            <<a.thread()->currentThread();
    mThread.start();
    mThread.wait();

    qDebug()<<"GUI thread after wait()"
           <<a.thread()->currentThread();


    return a.exec();
}
