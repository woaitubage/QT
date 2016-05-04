#include "mainwindow.h"
#include <QApplication>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QItemSelectionModel>

#include <QDirModel>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QSplitter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
   // w.show();



    QDirModel model;  //模型

    QTreeView treeview; //视图
    QListView listview;
    QTableView tableview;

    treeview.setModel(&model);
    treeview.setSelectionMode(QAbstractItemView::NoSelection);  //共享模型

    listview.setModel(&model);
    listview.setSelectionModel(treeview.selectionModel());

    tableview.setModel(&model);
    tableview.setSelectionModel(treeview.selectionModel());

    QSplitter *splitter=new QSplitter;
    splitter->addWidget((&treeview));
    splitter->addWidget(&listview);
    splitter->addWidget(&tableview);

    splitter->show();

    QObject::connect(&treeview,SIGNAL(doubleClicked(QModelIndex)),&listview,SLOT(setRootIndex(QModelIndex)));
    QObject::connect(&treeview,SIGNAL(doubleClicked(QModelIndex)),&tableview,SLOT(setRootIndex(QModelIndex)));





    return a.exec();
}
