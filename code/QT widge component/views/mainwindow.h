#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QModelIndex>
#include <QModelIndexList>
#include <QStandardItemModel>
#include <QListView>
#include <QTreeView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private:
    Ui::MainWindow *ui;

    QTableView *tableview;   //视图
    QStandardItemModel* model;  //模型
    QListView *list;
    QTreeView *tree;
};

#endif // MAINWINDOW_H
