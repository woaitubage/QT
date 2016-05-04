#include "widget.h"
#include <QApplication>
#include "ui_login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     Widget w;
     w.resize(25,250);
     w.setWindowTitle("Icon");
     w.setWindowIcon(QIcon("web.png"));
     w.show();










    //Login w;
    //w.show();

    return a.exec();
}
