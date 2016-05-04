#include "mythread.h"
#include <QDebug>
#include <QMutex>

MyThread::MyThread(QString s,bool b):name(s),Stop(b)
{

}

void MyThread::run()
{
    qDebug() << this->name << " " << this->Stop;
    for(int i=0;i<=100;i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->Stop)
        {
            break;
        }
        mutex.unlock();
        qDebug()<<this->name<<"  "<<i;
    }
}
