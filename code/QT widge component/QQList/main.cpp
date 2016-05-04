#include "qqlist.h"
#include <QApplication>
#include<QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qqlist w;
    w.show();


    return a.exec();
}
