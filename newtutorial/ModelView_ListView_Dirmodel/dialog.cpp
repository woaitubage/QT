#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QDirModel(this);
    model->setReadOnly(false);
    model->setSorting(QDir::DirsFirst|
                      QDir::IgnoreCase|
                      QDir::Name);





    ui->treeView->setModel(model);

    QModelIndex index=model->index("C:/");
    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->resizeColumnToContents(0);



}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // Make directory
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid()) return;

    QString name  = QInputDialog::getText(this, "Name", "Enter a name");

    if(name.isEmpty()) return;

    model->mkdir(index, name);
}

void Dialog::on_pushButton_2_clicked()
{
    QModelIndex index=ui->treeView->currentIndex();
    if(!index.isValid())
        return ;
    if(model->fileInfo(index).isDir())
    {
        model->rmdir(index);

    }
    else
    {
        model->remove(index);
    }
}
