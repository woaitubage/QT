#include "calculator.h"
#include <QApplication>

//The example shows how to use signals and slots to implement the functionality of a calculator widget,
//and how to use QGridLayout to place child widgets in a grid.
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator calc;
    calc.show();

    return a.exec();
}
