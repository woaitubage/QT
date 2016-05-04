#include "dialog.h"
#include "myclock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myclock w;
    w.show();

    return a.exec();
}
