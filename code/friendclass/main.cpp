#include "mainwindow.h"
#include <QApplication>

class myclass
{
    MainWindow *p;
    int x;
    int y;
    int cx;
    int cy;
    friend class runclass;
    myclass():p(NULL),x(100),y(100),cx(200),cy(200)//进行赋值
    {



    }

};

class runclass
{
    myclass my;
public:
    runclass()
    {
        my.p=new MainWindow;
        my.p->resize(my.x,my.y);
        my.p->move(my.cx,my.cy);
        my.p->show();
    }

};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    runclass new1;
    return a.exec();
}
