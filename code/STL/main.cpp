#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <list>
#include <QList>
#include <QDebug>

using namespace std;

int main1(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    list<QLabel* >mylist;
    char *str[5]={"libo","liuhaihua","liujin","afei","fupo"};
    for(int i=0;i<5;i++)
    {
        QLabel *p=new QLabel(str[i]);
        mylist.push_back(p);
    }

    int i=0;

    for(auto X:mylist)
    {
        X->move(i++*100,i++*100);
        X->show();
    }

    return a.exec();
}

int main2(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QList<int >mylist;
    mylist.push_back(1);
    mylist<<1<<2<<3<<4;

    QListIterator<int>myi(mylist);
    for(;myi.hasNext();)
    {
        qDebug()<<myi.next();
    }

    return a.exec();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QList<int >mylist;
    mylist.push_back(1);
    mylist<<1<<2<<3<<4;

    QMutableListIterator <int >i(mylist);

    for(i.toBack();i.hasPrevious();)
    {
        //i.next()*=2;
       qDebug()<<i.next();

    }

    for(i.toFront();i.hasNext();)
    {
        //i.next()*=2;
        i.setValue(i.peekNext()*2);
        qDebug()<<i.next();

    }

    return a.exec();
}
