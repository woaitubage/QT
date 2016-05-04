#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QListIterator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int >list;
    for(int i=0;i<10;i++)
        list.append(i);

    QListIterator<int> iter(list);  //对其进行迭代

    qDebug()<<"Forward...";
    while(iter.hasNext())
    {
        qDebug()<<iter.next();

    }
    qDebug()<<"Backward ...";

    while(iter.hasPrevious())
    {
        qDebug()<<iter.previous();
    }

    qDebug()<<"Forward while peeking...";
    while(iter.hasNext())
    {
        qDebug()<<iter.next();
        qDebug()<<"peek Next ..."<<iter.peekNext();

    }




    return a.exec();
}
