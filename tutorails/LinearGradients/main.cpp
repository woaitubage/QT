#include "lineargradients.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LinearGradients w;
    w.show();

    return a.exec();
}
