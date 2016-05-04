#include "window.h"
#include <QApplication>
//The Calendar Widget example shows use of QCalendarWidget.

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window window;
    window.show();
    return a.exec();
}
