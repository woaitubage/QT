#include "donut.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Donut w;
    w.show();

    return a.exec();
}
