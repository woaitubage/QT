#include <QCoreApplication>
#include "mythread.h"
#include <QtConcurrent/QtConcurrent>
#include <QThread>
/*
#ifndef QT_NO_CONCURRENT

void myRunFunction(QString name)
{
    for(int i=0;i<=5;i++)
    {
        qDebug()<<name<<" "<<i<<"from"<<QThread::currentThread();
        //QThread::currentThread()  Returns a pointer to a QThread which manages the currently executing thread.
    }

}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread  thread1("A"),thread2("B"),thread3("C");

    thread1.start();
    thread2.start();
    thread3.start();

   QFuture<void> t1=QtConcurrent::run(myRunFunction,QString("A"));
    QFuture<void> t2=QtConcurrent::run(myRunFunction,QString("B"));
     QFuture<void> t3=QtConcurrent::run(myRunFunction,QString("C"));

     t1.waitForFinished();
     t2.waitForFinished();
     t3.waitForFinished();

    return a.exec();
}

#else

#include <QApplication>
#include <QLabel>

int main(int argc,char *argv)
{
    QApplication app(argc,argv);
    QString text("Qt Concurrent is not yet support on this platform");

    QLabel *label=new QLabel(text);
    label->setWordWrap(true);

       label->show();
       qDebug() << text;

       app.exec();
}


#endif
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread  thread1("A"),thread2("B"),thread3("C");

    qDebug()<<"hello from GUI thread"<<a.thread()->currentThreadId();

    thread1.start(QThread::LowestPriority);
    thread2.start();
    thread3.start(QThread::HighestPriority);

    return a.exec();
}

