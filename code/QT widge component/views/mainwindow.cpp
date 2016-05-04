#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <QItemSelectionModel>
#include <QSplitter>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // 表格视图
    tableview =new QTableView(this);
    list=new QListView;
    tree=new QTreeView;
    //
    QSplitter *sp=new QSplitter(this);
    sp->addWidget(list);
    sp->addWidget(tableview);
    this->setCentralWidget(sp);
    //设置模型
    model =new QStandardItemModel(5,4,this);
    model->setHeaderData(0,Qt::Horizontal,tr("编号"));
    model->setHeaderData(1,Qt::Horizontal,tr("姓名"));
    model->setHeaderData(2,Qt::Horizontal,tr("手机号"));
    model->setHeaderData(3,Qt::Horizontal,tr("成绩"));
    tableview->setModel(model);

    //模型载入数据
    {
        QFile file("1.txt");
        if(file.open(QFile::ReadOnly|QFile::Text))
        {
            QTextStream stream(&file);
            QString linestr;

            //删除原来所有的数据
            model->removeRows(0,model->rowCount(QModelIndex()),QModelIndex());
            int row=0;
            do
            {
                linestr=stream.readLine();//读取一行
                if(linestr.isEmpty())
                {
                    model->insertRows(row,1,QModelIndex());  //插入多行
                    //QStringList its=linestr.split(" ",);//根据空格进行切割
                    QStringList its=linestr.split(",",QString::SkipEmptyParts); //skipemptyparts跳过空格
                    model->setData(model->index(row,0,QModelIndex()),its.value(0));
                    model->setData(model->index(row,1,QModelIndex()),its.value(1));
                    model->setData(model->index(row,2,QModelIndex()),its.value(2));
                    model->setData(model->index(row,3,QModelIndex()),its.value(3));

                     row++;

                }


            }
            while(!linestr.isEmpty());


            file.close();
        }
    }
    tableview->setModel(model);//设置模型
    list->setModel(model);
    tree->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
