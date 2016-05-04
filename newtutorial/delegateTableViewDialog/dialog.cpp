#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    myDelegate = new MyDelegate(this);


    model = new QStandardItemModel(4,2,this);
    ui->tableView->setModel(model);

    for(int row=0;row<4;row++)
    {
        for(int col=0;col<2;col++)
        {
            QModelIndex index=model->index(row,col,QModelIndex());
           // 0 for all data
            model->setData(index,0);


        }
    }

    ui->tableView->setItemDelegate(myDelegate);

}

Dialog::~Dialog()
{
    delete ui;
}
