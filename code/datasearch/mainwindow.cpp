#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->insertItem(0,QIcon("1.jpg"),tr("山羊座"));
    ui->comboBox->insertItem(0,QIcon("1.jpg"),tr("处女座"));
    ui->comboBox->insertItem(0,QIcon("1.jpg"),tr("双鱼座座"));
    ui->comboBox->insertItem(0,QIcon("1.jpg"),tr("狮子座"));
     ui->comboBox->insertItem(0,QIcon("1.jpg"),tr("李二辉"));
    this->sl=new QStringList();
    this->sl->append(tr("中文数据测试123a"));
    this->slm=new QStringListModel(this);
    this->slm->setStringList(*sl);
    ui->listView->setModel(slm);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString qstr=ui->comboBox->currentText();
    ui->lineEdit->setText(qstr);

    //qDebug()<<qstr;
    //const char *psearch=qstr.toStdString().c_str();//转化为C风格的字符串
    //qDebug()<<psearch;  // 字符串严格转换
    QByteArray ba=qstr.toLocal8Bit();
    const char *psearch=ba.data();

    ifstream fint("D:\\dangdangwang.txt");  //路径不能有中文
    if(!fint)
    {
        qDebug()<<"open fail";

    }
    else
    {
        qDebug()<<"open success";
    }
    int i=0;
    ;
     ;
    while(!fint.eof())
    {
        i++;
        if(i>4000)
        {
            break;
        }
        char strall[1024]={0};
        fint.getline(strall,1023);
       // qDebug()<<strall;  //QT读文件乱码

        QTextCodec *codec = QTextCodec::codecForName("gb2312");
       QString qstrall=codec->toUnicode(strall);  //中文

      //  qDebug()<<qstrall;
        const char *pstrall=qstrall.toStdString().c_str();//转化为C风格的字符串
        qDebug()<<pstrall;  // 字符串严格转换   //这种形式的转换进行比较会使得数据缺失


        char *pfind=strstr(strall,psearch);
        if(pfind!=NULL)
        {
            qDebug()<<pstrall;
            sl->append(qstrall);//添加到列表
            slm->setStringList(*sl);
            ui->listView->setModel(slm);
        }
        else
        {
            qDebug()<<"not find";
        }

    }


}
