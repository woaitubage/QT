#include "comboboxex.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ComboBoxEx w;
    w.show();

    return a.exec();
}
