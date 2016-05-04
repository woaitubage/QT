#include "verticalbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VerticalBox w;
    w.show();

    return a.exec();
}
