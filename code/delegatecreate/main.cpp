#include "mainwindow.h"
#include <QApplication>

class myclass
{

    MainWindow *p;
    myclass (int i)
    {
        p=new MainWindow[i];//分配内存

    }

public:
    myclass(int i,int j):myclass(i)
    {
        if(j==0)
        {
            for(int k=0;k<i;k++)
            {
                p[k].show();
            }
        }
        else
        {
            for(int k=0;k<i;k++)
            {
                p[k].resize(100,100);
                p[k].show();
            }
        }

    }
    myclass(int i,double k):myclass(i)
    {

        for(int k=0;k<i;k++)
        {
            QPalette p1(p[k].palette());
            p1.setColor(QPalette::Background,Qt::yellow);
            p[k].setPalette(p1);
            p[k].show();

        }


    }


    myclass(int i,double k,char *str):myclass(i,k)
    {

        for(int k=0;k<i;k++)
        {
            QPalette p1(p[k].palette());
            p1.setColor(QPalette::Background,Qt::yellow);
            p[k].setPalette(p1);
            p[k].setWindowTitle(str);
            p[k].show();

        }


    }

};




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //myclass my1{3,1};
    myclass my1(3,1,"haihua");
    return a.exec();
}










