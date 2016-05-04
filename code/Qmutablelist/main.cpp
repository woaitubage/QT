#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QVariant>

int main1(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QList<int >mylist{10,20,30,40,50};
    mylist<<100<<200<<300<<400;//流式运算符
    QMutableListIterator<int>it(mylist);//构造初始化
    for(int i=0;i<10;i++)
    {
        it.insert(i);  //前叉
    }

    for(it.toFront();it.hasNext();)
    {
        qDebug()<<it.next();
    }

    for(it.toBack();it.hasPrevious();)
    {
        //qDebug()<<it.previous();
        if(it.previous()%2==0)
        {
            it.remove();
        }
        else
        {
            it.setValue(it.peekNext()*10);
            qDebug()<<it.previous();
        }
    }


    MainWindow w;
    w.show();

    return a.exec();
}

int main2(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QList<int >mylist{10,20,30,40,50};
    mylist<<100<<200<<300<<400;//流式运算符

    QList<int>::iterator it;  //QList可读可写
    QList<int>::const_iterator cit;//只读

    for(cit=mylist.begin();cit!=mylist.end();cit++)
    {
        qDebug()<<(*cit);
    }

    MainWindow w;
    w.show();

    return a.exec();
}

int main3(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMap<QString,QString>map;
    map.insert("123","123123123123123");
    map.insert("124","123123123123124");

    QMap<QString,QString>::iterator it;
   // QMap<QString,QString>::const_iterator its;

    if(it.findnext("124"))
    {
        it.setValue("12345");

    }

    for(it=map.begin();it!=map.end();it++)
    {
        qDebug()>>it.key()<<it.value();//词典

    }
    it=map.find("1234");


    MainWindow w;
    w.show();

    return a.exec();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QVariant qv1(103);
    QVariant qv2("103");
    QVariant qv3(101.234);

    QList<QVariant> mylist;


    MainWindow w;
    w.show();

    return a.exec();
}
