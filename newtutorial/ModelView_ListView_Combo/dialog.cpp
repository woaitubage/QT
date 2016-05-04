#include "dialog.h"
#include "ui_dialog.h"
#include <QStringList>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList List;
    List<<"clair de lune"<<"Reverie"<<"Prelude";

    model->setStringList(List);

    ui->listView->setModel(model);  //once the listview add/insert  a row of data,at the same time comboBox enable synchronous with listview
    ui->comboBox->setModel(model);  //model is  used to stored data and view is used to presented to some data;


    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed |
                                  QAbstractItemView::DoubleClicked);


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Add_PushButton_clicked()
{
    int row=model->rowCount();
    model->insertRows(row,1);
    QModelIndex index=model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);

}

void Dialog::on_Insert_PushButton_clicked()
{
    // Insert button clicked

    // Get the position
    int row = ui->listView->currentIndex().row();

    // Enable add one or more rows
    model->insertRows(row,1);

    // Get row for Edit mode
    QModelIndex index = model->index(row);

    // Enable item selection and put it edit mode
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

void Dialog::on_Delete_PushButton_clicked()
{
    // Delete button clicked
       // For delete operation,
       // we're dealing with a Model not a View
       // Get the position
       model->removeRows(ui->listView->currentIndex().row(),1);
}
