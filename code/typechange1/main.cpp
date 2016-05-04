
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
class winsize
{
public:
    int x;
    int y;

};

class mywin
{
public:
    MainWindow *p;
    int cx;
    int cy;

    mywin():cx(0),cy(0),p(nullptr)
    {

    }


    mywin(const winsize &mysize):cx(mysize.x),cy(mysize.y)
    {
        p=new MainWindow;
        p->resize(cx,cy);
        p->show();

    }

    void operator =(const winsize &mysize)
    {
        if(p!=nullptr)
        {
            cx=mysize.x;
            cy=mysize.y;
            p->resize(cx,cy);
            p->show();
        }
    }

    operator winsize()
    {
        winsize tmp{cx,cy};
        return tmp;
    }

};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    winsize win1{200,600};//用于赋值
    //winsize win10{800,100};
    mywin my=win1;
   // my=win10;
   // winsize win2=my;//这个语句实际上就是先转换为下面的语句，然后在调用,重载的转换的本质
    winsize win2=my.operator winsize();

    winsize win3=my;

    qDebug()<<win2.x<<win2.y;

    qDebug()<<win3.x<<win3.y;
    return a.exec();
}
