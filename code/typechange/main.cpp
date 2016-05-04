#include "mainwindow.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    winsize win1{200,600};
    mywin my=win1;

    return a.exec();
}
