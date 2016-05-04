#include "mainwindow.h"
#include <QApplication>

class Window
{
    //权限管理
    MainWindow *p;
    int x;//大小
    int y;
    int cx;//位置
    int cy;
public:

    Window()
    {
        p=new MainWindow;
        this->x=100;
        this->y=100;
        this->cx=500;
        this->cy=500;
        p->resize(this->x,this->y);
        p->move(this->cx,this->cy);

        p->show();

    }
    ~Window()
    {
        delete p;
    }

    void update()
    {
        p->resize(this->x,this->y);
        p->move(this->cx,this->cy);
    }

    void changesize(int a,int b)
    {
        this->x=a;
        this->y=b;
     }

    void changepos(int a,int b)
    {
        this->cx=a;
        this->cy=b;
     }

};




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//QT 的框架
    //Window *p=new Window;
   // MainWindow w;
   // w.show();
    Window my1;
    for(int i=100;i<600;i++)
    {
        my1.changesize(i,i);
        my1.update();
    }


    for(int i=600;i>100;i--)
    {
        my1.changesize(i,i);
        my1.update();
    }

    for(int i=0;i<600;i++)
    {
        my1.changepos(i,i);
        my1.update();
    }

    return a.exec();
}
