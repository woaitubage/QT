#include "widget.h"
#include <QApplication>
#include <QTableView>
#include "modelex.h"
#include <QModelIndex>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // Widget w;
   // w.show();

    modelex m;
    QTableView view;
    view.setModel(&m);
    view.show();
    view.resize(800,600);


    return a.exec();
}
