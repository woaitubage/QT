#include "mainwindow.h"
#include <QApplication>
#include <list>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <vector>
using namespace std;
//异构数据结构
//异构数组,每个数组元素都是基类指针，指针存储了派生类的对象
//异构链表，每一个链表的节点都是基类指针,指针存储了派生类的对象
//基类指针基于多态与虚函数调用派生类的方法，

class object
{
public:
    virtual void showit()
    {

    }

};

class mywindow:public object
{
public:
    MainWindow  *p;
    mywindow()
    {
        p=new MainWindow;
    }

    void showit()
    {
        p->show();
    }

};

class mylabel:public object
{
public:
    QLabel *p;
    mylabel()
    {
        p=new QLabel;
    }

    void showit()
    {
        p->show();
    }
};


class mybutton:public object
{
public:
    QPushButton *p;
    mybutton()
    {
        p=new QPushButton;
    }

    void showit()
    {
        p->show();
    }

};

class myedit:public object
{
public:
    QLineEdit  *p;
    myedit()
    {
        p=new QLineEdit;
    }

    void showit()
    {
        p->show();
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vector<object *> mylist;

    object *p=new mywindow;
    mylist.push_back(p);

    p=new mylabel;
    mylist.push_back(p);

    p=new mylabel;
    mylist.push_back(p);

    p=new mybutton;
    mylist.push_back(p);

    p=new myedit;
    mylist.push_back(p);

    for(auto it:mylist)
    {
        (*it).showit();
    }


    return a.exec();
}


int main1(int argc, char *argv[])
{
    QApplication a(argc, argv);
    list<object *> mylist;

    object *p=new mywindow;
    mylist.push_back(p);

    p=new mylabel;
    mylist.push_back(p);

    p=new mylabel;
    mylist.push_back(p);

    p=new mybutton;
    mylist.push_back(p);

    p=new myedit;
    mylist.push_back(p);

    for(auto it:mylist)
    {
        (*it).showit();
    }


    return a.exec();
}










