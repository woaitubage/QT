#include "burning.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Burning w;
    w.show();

    return a.exec();
}
