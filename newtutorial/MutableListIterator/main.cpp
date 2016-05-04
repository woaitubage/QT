#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QListIterator>
#include <QMutableListIterator>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList <int>List;
    for(int i=0;i<10;i++)
        List.append(i);
    QMutableListIterator<int>mIter(List);

    qDebug()<<"Modifying element while moving forward ....";
    while(mIter.hasNext())
    {
        int val=mIter.next();
        if(val%2==1)
            mIter.remove();
        else
            if(val%2==0)
                mIter.setValue(-val);
    }

    qDebug()<<"Start again form front...";
    mIter.toFront();
    qDebug()<<"Forwad....";
    while(mIter.hasNext())
        qDebug()<<mIter.next();



    return a.exec();
}
