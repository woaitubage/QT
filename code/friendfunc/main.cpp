#include "dialog.h"
#include <QApplication>

class myclass
{
    Dialog *p;
    friend int main(int argc,char *argv[]);//友元函数声明，与3p无关

};




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // Dialog w;
   // w.show();
    myclass my;
    my.p=new Dialog;







    return a.exec();
}
