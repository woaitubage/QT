#include "cursors.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cursors w;
    w.resize(350,150);
    w.setWindowTitle("Cursors");

    w.show();

    return a.exec();
}
