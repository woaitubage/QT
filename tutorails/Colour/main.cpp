#include "colours.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Colours w;
    w.show();

    return a.exec();
}
