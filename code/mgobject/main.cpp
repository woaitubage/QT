#include "dialog.h"
#include "mydialog.h"
#include <QApplication>
#include "huahuafindfang.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    w.move(800,500);

    //huahuafindfang hf(6,8);

    return a.exec();
}
