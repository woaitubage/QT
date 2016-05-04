#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTableView>
#include <QItemDelegate>
#include <QStandardItemModel>
#include "mydelegate.h"


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QStandardItemModel *model;
    MyDelegate  *myDelegate;


};

#endif // DIALOG_H
