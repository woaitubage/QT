#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString mPath="c:/";
    dirModel = new QFileSystemModel(this);

    dirModel->setFilter(QDir::NoDotAndDotDot| QDir::AllDirs);


    //QFileSystemModel requires root path
    dirModel->setRootPath(mPath);

    //attach the model to the view
    ui->treeView->setModel(dirModel);

    fileModel=new QFileSystemModel(this);
    fileModel->setFilter(QDir::NoDotAndDotDot|QDir::Files);
    fileModel->setRootPath(mPath);

    ui->listView->setModel(fileModel);


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_treeView_clicked(const QModelIndex &index)
{
    QString mpath=dirModel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(fileModel->setRootPath(mpath));
}
