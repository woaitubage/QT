#include "dialog.h"
#include "mydialog.h"
#include <QApplication>

mydialog *p[6][8];//矩阵数组
int i=1;
int j=1;



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    w.move(800,500);

    //
    QPalette colorit(w.palette());//创建一个类，设置背景为红色
    colorit.setColor(QPalette::Background,Qt::red);
    w.setPalette(colorit);//设置背景为红色

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<8;j++)
        {
            p[i][j]=new mydialog;
            p[i][j]->resize(80,80);
            p[i][j]->move(j*100,i*100);
            p[i][j]->show();
            p[i][j]->id=0;
            p[i][j]->AI=0;
            QPalette colorit(p[i][j]->palette());//创建一个类，设置背景为红色
            colorit.setColor(QPalette::Background,Qt::white);
            p[i][j]->setPalette(colorit);//设置背景为红色

        }
    }
   // mydialog w1;
    //w1.show();


    {
        p[1][1]->id=1;
        QPalette colorit(p[1][1]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::red);
        p[1][1]->setPalette(colorit);//设置背景为红色


    }

    {
        p[4][5]->id=2;
        QPalette colorit( p[4][5]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::black);
        p[4][5]->setPalette(colorit);//设置背景为红色
    }

    {
        p[5][6]->id=2;
        QPalette colorit( p[5][6]->palette());//创建一个类，设置背景为红色
        colorit.setColor(QPalette::Background,Qt::black);
        p[5][6]->setPalette(colorit);//设置背景为红色
    }

    return a.exec();
}
