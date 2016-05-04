#include "transparentrectangles.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TransparentRectangles w;
    w.show();

    return a.exec();
}
