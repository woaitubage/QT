#include "mytask.h"
#include <QDebug>

MyTask::MyTask()
{
    qDebug()<<"MyTask";

}

void MyTask::run()
{
    qDebug()<<"Task started";

    int iNumber=0;

    for(int i=0;i<100;i++)
    {
        iNumber+=1;

    }
    qDebug()<<"Task done";
    emit Result(iNumber);

}
