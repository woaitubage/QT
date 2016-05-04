#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QObject *parent):QThread(parent)
{

}

void MyThread::run()
{
    for(int i=0;i<=5;i++)
    {
        qDebug()<<i;
        this->msleep(500);
    }
}
