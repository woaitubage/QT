#include "pixmap.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pixmap w;
    w.show();

    return a.exec();
}
