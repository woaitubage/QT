#include "mainwindow.h"
#include <QApplication>
#include <cstdlib>
#include <QPushButton>

class classA
{
    class winsize
    {
    public:
        int x;
        int y;

    };
    winsize mysize;//winsize属于包含
public:
    MainWindow w;//使用
    classA()
    {
        w.show();
    }

};

//继承
class haihua:public QPushButton
{
public:
    void run(const char *str)
    {
        system(str);
    }

};

class liuhaihua:public QPushButton,public MainWindow
{
public:
    void run(const char *str)
    {
        system(str);
    }


};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    liuhaihua sd;
    sd.MainWindow::show();
    sd.QPushButton::show();

    sd.MainWindow::resize(400,400);
    sd.QPushButton::resize(400,400);
    sd.run("tasklist & pause");


    return a.exec();
}


int main11(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //classA c1;
    haihua h1;
    h1.show();
    h1.resize(200,500);
    h1.run("echo  刘海华很厉害 & pause");


    return a.exec();
}
