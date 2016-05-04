#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class X
{
protected:
    int x;
public:
    X(int i)
    {

    }


};

class Y:public X
{
protected:
    int y;
public:
    Y(int i,int j):X(i),y(j)
    {

    }

};

class mywin:public Y
{
    MainWindow *p;
public:
    mywin(int i,int j):Y(i,j),p(new MainWindow("12"))
    {
        p->resize(x,y);
        p->show();
    }

};


class haihua:public QPushButton,public QLabel,public MainWindow
{
public:
    //构造进行重载
    haihua():QPushButton("haihua"),QLabel("love"),MainWindow("fangfang")
    {
        this->QPushButton::show();
        this->QLabel::show();
        this->MainWindow::show();
    }

    haihua(const char *str1,const char *str2,const char *str3):QPushButton(str1),QLabel(str2),MainWindow(str3)
    {
        this->QPushButton::show();
        this->QLabel::show();
        this->MainWindow::show();
    }
};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //mywin my1(300,800);

   /* QPushButton q1("12345");
    q1.show();
    QLabel q2("liuhaihua");
    q2.show();

    MainWindow my1("1234");
    my1.show();*/

    haihua hai1;
    haihua hai2("haihua","love","fangfang");
    return a.exec();
}
