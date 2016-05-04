#include "taskdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaskDialog w;
    w.show();

    return a.exec();
}
