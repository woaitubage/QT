#include "ledit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ledit w;
    w.show();

    return a.exec();
}
