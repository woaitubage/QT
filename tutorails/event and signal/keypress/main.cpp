#include "keypress.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Keypress w;
    w.show();

    return a.exec();
}
