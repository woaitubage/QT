#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QPushButton>


class object
{
public:
    virtual void go()  // 虚函数，自动选择，
    {
        qDebug()<<"hello china,hello yincheng";
    }
};

class Aobject:public object
{
    void go()
    {
        MainWindow *p=new MainWindow;
        p->show();

    }
};

class Bobject:public object
{
    void go()
    {
        QPushButton *p=new QPushButton;
        p->show();

    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    object o1;
    object ao1;
    object bo1;
    object *p;
    p=&o1;
    p->go();  //接口p->go(),多态
    p=&ao1;
    p->go();
    p=&bo1;
    p->go();



    return a.exec();
}
