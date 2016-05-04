#include <QCoreApplication>
#include "download.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Download d;
    d.doDownlaod();

    return a.exec();
}
