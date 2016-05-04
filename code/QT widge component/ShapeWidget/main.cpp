#include "widget.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pix("1.png");
    QSplashScreen splash(pix);
    splash.show();




    a.processEvents();
    Widget w;
    w.show();

    return a.exec();
}
