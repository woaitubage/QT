#include "dialog.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>


 template <class T>
void show(T *p)
{
    p=new T;
    p->show();
}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QPushButton *p=new QPushButton;
    //show(p);




    //Dialog w;
    //w.show();//显示
   // w.resize(100,100);//设置大小
    //w.move(0,0);//位置




    //QPushButton *p=new QPushButton;
    //p->show();

    //QLabel *p=new QLabel;
    //p->show();

    //Dialog *p=new Dialog;
    //p->show();



    return a.exec();
}
