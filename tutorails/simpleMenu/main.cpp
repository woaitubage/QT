#include "simplemenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    simplemenu w;
    w.show();

    return a.exec();
}
