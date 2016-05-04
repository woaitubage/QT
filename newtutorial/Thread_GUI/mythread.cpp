#include "mythread.h"
#include <QMutex>

MyThread::MyThread(QObject *parent,bool b):QThread(parent),Stop(b)
{

}


void MyThread::run()
{
    for(int i=0;i<=100;i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->Stop)
            break;
        mutex.unlock();

        //emit the signal for the count label
        emit valueChanged(i);

        //slowdown the count change,msec
        this->msleep(500);

    }
}
