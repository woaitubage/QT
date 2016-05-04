#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    slm=new QStringListModel(this);  //首先创建模型
     sl=new QStringList();//列表
     sl->append("liuhaihua");
     sl->append("fupo");
     sl->append("bobobo");
     sl->append("boygod");
     slm->setStringList(*sl);//模型连接列表
     ui->listView->setModel(slm);//模型UI
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  QString qstr;
  qstr=ui->lineEdit->text();
   sl->append(qstr);
   slm->setStringList(*sl);//模型连接列表
   ui->listView->setModel(slm);//模型UI
   ui->listView->update();
    //ui->comboBox->setModel(slm);
   ui->comboBox->insertItem(0,QIcon("1.jpg"),"hello 1");
    ui->comboBox->insertItem(1,QIcon("1.jpg"),"hello 1");
    ui->comboBox->insertItem(2,QIcon("1.jpg"),"hello 2");
    ui->comboBox->insertItem(3,QIcon("1.jpg"),"hello 3");
    ui->comboBox->insertItem(4,QIcon("1.jpg"),"hello 4");
    ui->comboBox->insertItem(5,QIcon("1.jpg"),"hello 5");



}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString myqstr=ui->comboBox->currentText();
    ui->lineEdit->setText(myqstr);
}
