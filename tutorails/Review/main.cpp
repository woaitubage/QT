#include "review.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Review w;
    w.show();

    return a.exec();
}
