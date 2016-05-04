#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dialog w;
   // w.show();

    struct mys
    {
        Dialog w1;
        Dialog w2;

    };

    mys my1;
    my1.w1.show();
    my1.w2.show();

    mys my2=my1;   //结构体可以直接赋值，
    my2.w1.show();
    my2.w2.show();


    return a.exec();
}

void showitstack()
{
    struct mys
    {
        Dialog w1;
        Dialog w2;

    };
    mys my1;//栈上，一闪而过
    my1.w1.show();
    my1.w2.show();

}

void showitheap()
{
    struct mys
    {
        Dialog w1;
        Dialog w2;

    };
    mys *p=new mys;
    p->w1.show();
    p->w2.show();

}


int main3(int argc,char *argv[])
{
    QApplication a(argc,argv);
    showitstack();


    return a.exec();
}






int main2(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    struct mys
    {
        Dialog *p1;
        Dialog *p2;

    };

    mys my1;
    my1.p1=new Dialog;
    my1.p2=new Dialog;
    my1.p1->show();
    my1.p2->show();

    mys my2=my1;//直接复制，对于一般数据没有问题，浅拷贝
    my2.p1=new Dialog;
    my2.p2=new Dialog;
    my2.p1->show();
    my2.p2->show();


    return a.exec();
}




