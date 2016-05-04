#include "mybutton.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyButton w;
    w.resize(250,150);
    w.setWindowTitle("QPushButton");

    w.show();

    return a.exec();
}
