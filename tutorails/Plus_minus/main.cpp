#include "plusminus.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlusMinus w;
    w.resize(300,190);
    w.setWindowTitle("plus minus");
    w.show();

    return a.exec();
}
