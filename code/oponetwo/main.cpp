#include "mainwindow.h"
#include <QApplication>

class myclass
{
    MainWindow *p;
    int x;
    int y;
    friend void operator ++(myclass & my);
    friend void operator +(myclass & my,int num);
    friend int main(int argc,char *argv[]);
public:

    myclass ()
    {
        p=new MainWindow;
        x=100;
        y=300;
        p->resize(x,y);
        p->show();

    }

    //一元重载
    /*
    void operator ++()
    {
        this->x++;
        this->y++;
        p->resize(x,y);
    }
    */
    /*
    void operator +(int num)
    {
        this->x+=num;
        this->y+=num;
        p->resize(x,y);
    }*/
};

void operator ++(myclass & my)
{
    my.x++;
    my.y++;
    my.p->resize(my.x,my.y);
}

void operator +(myclass & my,int num)
{
    my.x+=num;
    my.y+=num;
    my.p->resize(my.x,my.y);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myclass my1;
    for(int i=0;i<500;i++)
    {
       //++my1;
        my1+2;
    }
    return a.exec();
}
