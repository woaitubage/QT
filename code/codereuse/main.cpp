#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
//代码重用:模板，继承，类的包含,类的封装

//模板的重用
template<class T>
T add(T a,T b)
{
    return a+b;//体现在与数据类型无关
}

template <class T,class F>//与操作方式无关
T opp(T a,F f)
{
    return f(a);
}

class my
{
    MainWindow *p;//类的包含
    QPushButton *p2;
};
//my my1.p->x;

//类的继承,选择性继承,
class mynew:public MainWindow,public QPushButton
{


};
//mynew my1,my1.x;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
