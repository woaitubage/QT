#include "disconnect.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Disconnect w;
    w.show();

    return a.exec();
}
