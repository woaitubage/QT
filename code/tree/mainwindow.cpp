#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTreeWidgetItem>
#include <QDebug>

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

void MainWindow::inittree()
{
    ui->treeWidget->clear();

    {
        QTreeWidgetItem *group1=new QTreeWidgetItem(ui->treeWidget);//初始化
        group1->setText(0,tr("刘海华1"));

        QTreeWidgetItem *sub1=new QTreeWidgetItem(group1);
        QTreeWidgetItem *sub2=new QTreeWidgetItem(group1);
        QTreeWidgetItem *sub3=new QTreeWidgetItem(group1);

        sub1->setText(0,tr("刘海华儿子1"));

        QTreeWidgetItem *ssub1=new QTreeWidgetItem(sub1);
        QTreeWidgetItem *ssub2=new QTreeWidgetItem(sub1);
        QTreeWidgetItem *ssub3=new QTreeWidgetItem(sub1);

         ssub1->setText(0,tr("刘海华孙子1"));
         QTreeWidgetItem *sssub1=new QTreeWidgetItem(ssub1);
         QTreeWidgetItem *sssub2=new QTreeWidgetItem(ssub1);
         QTreeWidgetItem *sssub3=new QTreeWidgetItem(ssub1);

         sssub1->setText(0,tr("刘海华曾孙子1"));
         sssub2->setText(0,tr("刘海华曾孙子2"));
         sssub3->setText(0,tr("刘海华曾孙子3"));

         ssub2->setText(0,tr("刘海华孙子2"));
         ssub3->setText(0,tr("刘海华孙子3"));


        sub2->setText(0,tr("刘海华儿子2"));
        sub3->setText(0,tr("刘海华儿子3"));
    }

    {
        QTreeWidgetItem *group2=new QTreeWidgetItem(ui->treeWidget);//初始化
        group2->setText(0,tr("海华2"));


        QTreeWidgetItem *sub1=new QTreeWidgetItem(group2);
        int id=sub1->childCount();
        QTreeWidgetItem *sub2=new QTreeWidgetItem(group2);
        QTreeWidgetItem *sub3=new QTreeWidgetItem(group2);

        sub1->setText(0,tr("海华儿子1"));

        QTreeWidgetItem *ssub1=new QTreeWidgetItem(sub1);
        QTreeWidgetItem *ssub2=new QTreeWidgetItem(sub1);
        QTreeWidgetItem *ssub3=new QTreeWidgetItem(sub1);

         ssub1->setText(0,tr("海华孙子1"));
         QTreeWidgetItem *sssub1=new QTreeWidgetItem(ssub1);
         QTreeWidgetItem *sssub2=new QTreeWidgetItem(ssub1);
         QTreeWidgetItem *sssub3=new QTreeWidgetItem(ssub1);

         sssub1->setText(0,tr("海华曾孙子1"));
         sssub2->setText(0,tr("海华曾孙子2"));
         sssub3->setText(0,tr("海华曾孙子3"));

         ssub2->setText(0,tr("海华孙子2"));
         ssub3->setText(0,tr("海华孙子3"));


        sub2->setText(0,tr("刘海华儿子2"));
        sub3->setText(0,tr("刘海华儿子3"));
    }


}

void MainWindow::on_pushButton_clicked()
{
    QStringListModel *slm;
    QStringList *sl;

    slm=new QStringListModel(this);
    sl=new QStringList();
    int id=ui->treeWidget->topLevelItemCount();   //根节点数
    //qDebug()<<id;
    QTreeWidgetItemIterator it(ui->treeWidget);//迭代器
    while(*it)
    {
        qDebug()<<(*it)->text(0);
        sl->append((*it)->text(0));
        it++;
    }

    slm->setStringList(*sl);
    ui->listView->setModel(slm);
}
