#ifndef MYTHREAD_H
#define MYTHREAD_H

//#include <QObject>
#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread(QObject *parent=0,bool b=false);

    void run();


    bool Stop;

    //To communicate with GUI Thread
    //we need to emit a signal

    signals:
    void valueChanged(int);


};

#endif // MYTHREAD_H
