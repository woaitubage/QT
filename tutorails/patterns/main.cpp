#include "patterns.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Patterns w;
    w.show();

    return a.exec();
}
