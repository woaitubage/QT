#include "formex.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormEx w;
    w.show();

    return a.exec();
}
