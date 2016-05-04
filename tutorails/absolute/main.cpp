#include "absolute.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Absolute w;
    w.show();

    return a.exec();
}
