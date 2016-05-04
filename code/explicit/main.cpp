#include "mainwindow.h"
#include <QApplication>


class mywin
{
    MainWindow *p;
public:
    mywin(int num)
    {
        p=new MainWindow;
        p->resize(num,num);
        p->show();
    }
};





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    //w.show();

    mywin my1=(mywin)400;




    return a.exec();
}
