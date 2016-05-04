#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
//静态变脸，对于公有变脸，所有类对象，以及派生类对象都可以访问
//静态变量，私有，类对象内部可以访问,设定公开接口，get(),set()
//静态变量，保护，类对象以及派生类对象内部可以访问，外部必须设定接口
//静态变量的接口，原则都设定为静态函数,不需要this指针，不依赖与一个对象


class mywin:public MainWindow
{
public:
    void show()
    {
         qDebug()<<num;
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //w.setnum(40);

    MainWindow::setnum(400);
    MainWindow::getnum();
    mywin mywin1;

    qDebug()<<w.getnum()<<endl;
    qDebug()<<mywin1.getnum();
    qDebug()<<mywin::getnum();

    return a.exec();
}
