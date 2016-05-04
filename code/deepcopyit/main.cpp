#include "mainwindow.h"
#include <QApplication>

class mywin
{
public:
    MainWindow *p;
    int n;
    mywin():n(10)
    {
        p=new MainWindow[n];
        for(int i=0;i<10;i++)
        {
            p[i].resize(100,100);
            p[i].move(i*100,0);
            p[i].show();
        }
    }

    mywin(const mywin & my)
    {
        this->n=my.n;
        this->p=new MainWindow[this->n];
        for(int i=0;i<10;i++)
        {
            p[i].resize(100,100);
            p[i].move(i*100,300);
            p[i].show();
        }
    }


    ~mywin()
    {
        delete [] p;
    }



};




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mywin my1;
    mywin my2(my1);//浅拷贝




    return a.exec();
}
