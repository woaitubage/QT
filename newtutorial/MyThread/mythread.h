#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>


class MyThread : public QThread
{
public:
    MyThread(QString s,bool b=false);
    void run();

    //variable that mutex protects
    bool Stop;


private:
    QString name;







};

#endif // MYTHREAD_H
