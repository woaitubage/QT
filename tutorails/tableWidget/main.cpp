#include "tabel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tabel w;
    w.show();

    return a.exec();
}
