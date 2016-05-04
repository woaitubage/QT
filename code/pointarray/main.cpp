#include "mainwindow.h"
#include <QApplication>

void showi1t()
{
    MainWindow w[3][5];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            w[i][j].move(150*i,150*j);
            w[i][j].resize(100,100);
            w[i][j].show();
        }
    }




}

void showit2()
{
    MainWindow *w[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            w[i][j]=new MainWindow;
            w[i][j]->resize(100,100);
            w[i][j]->move(i*100,j*100);
            w[i][j]->show();
        }
    }
}

void showit()
{
    //指针，指向二级指针数组，指针数组的行指针
    MainWindow *(*w)[5]=( MainWidow *(*)[5])new MainWindow *[20];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            w[i][j]=new MainWindow;
            w[i][j]->resize(100,100);
            w[i][j]->move(i*100,j*100);
            w[i][j]->show();
        }
    }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
  /*  MainWindow w[10];
   // for(int i=0;i<10;i++)
  //  {
        w[i].move(i*100,i*100);
        w[i].resize(100,100);
        w[i].show();

    }*/
    showit();

    return a.exec();
}
