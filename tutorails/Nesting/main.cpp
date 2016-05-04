#include "layouts.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Layouts w;
    w.show();

    return a.exec();
}
