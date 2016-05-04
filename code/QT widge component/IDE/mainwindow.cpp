#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("你们大爷我的编译器");
    text=new QTextEdit;  //文本编辑器
    QFont font;
    font.setPixelSize(30);
    text->setFont(font);
    QColor qcolor;
    qcolor.setRgb(0,255,255);  //黑色
    this->setCentralWidget(text);  //设定在中间

    file=this->menuBar()->addMenu("文件");
    Afile_open=new QAction("打开",this);
    Afile_close=new QAction("关闭",this);
    Afile_save=new QAction("保存",this);
    Afile_exit=new QAction("退出",this);

    file->addAction(Afile_open);//添加菜单
    file->addAction(Afile_close);//添加菜单
    file->addAction(Afile_save);//添加菜单
    file->addAction(Afile_open);//添加菜单
    connect(Afile_open,SIGNAL(triggered(bool)),this,SLOT(file_open()));
    connect(Afile_close,SIGNAL(triggered(bool)),this,SLOT(file_close()));
    connect(Afile_save,SIGNAL(triggered(bool)),this,SLOT(file_save()));
    connect(Afile_exit,SIGNAL(triggered(bool)),this,SLOT(file_exit()));


    edit=this->menuBar()->addMenu("编辑");
    Aedit_selall=new QAction("全选",this);
    Aedit_cut=new QAction("剪切",this);
    Aedit_copy=new QAction("复制",this);
    Aedit_paste=new QAction("黏贴",this);
    edit->addAction(Aedit_selall);//添加菜单
    edit->addAction(Aedit_cut);//添加菜单
    edit->addAction(Aedit_copy);//添加菜单
    edit->addAction(Aedit_paste);//添加菜单
    connect(Aedit_selall,SIGNAL(triggered(bool)),this,SLOT(edit_selall()));
    connect(Aedit_selall,SIGNAL(triggered(bool)),this,SLOT(edit_selall()));
    connect(Aedit_copy,SIGNAL(triggered(bool)),this,SLOT(edit_copy()));
    connect(Aedit_paste,SIGNAL(triggered(bool)),this,SLOT(edit_paste()));



    build=this->menuBar()->addMenu("构建");
    Abuild_it=new QAction("构建",this);
    Abuild_andrus=new QAction("运行",this);
    build->addAction(Abuild_it);//添加菜单
    build->addAction(Abuild_andrus);//添加菜单
    connect(Abuild_it,SIGNAL(triggered(bool)),this,SLOT(build_it()));
    connect(Abuild_andrus,SIGNAL(triggered(bool)),this,SLOT(build_andrus()));





    about=this->menuBar()->addMenu("关于");
    Aabout_it=new QAction("关于",this);
    about->addAction(Aabout_it);//添加菜单
    connect(Aabout_it,SIGNAL(triggered(bool)),this,SLOT(about_it()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::file_open()
{
    filename=QFileDialog::getOpenFileName(this,"海华大爷帮你打开","/","*.*");
    if(filename.isEmpty())
    {
        QMessageBox::information(this,"关于刘海华","注意选中一个文件");
        return ;
    }
    fstream fin(filename.toStdString().c_str());
    if(!fin)
    {
        QMessageBox::information(this,"关于刘海华","打开文件失败");
        return ;
    }
    QString readinfo;
    char newline[4]="\r\n";
    while(!fin.eof())
    {
        char buf[1024]={0};
        fin.getline(buf,2014);//读取
        readinfo+=buf;//累加
        readinfo+=newline;
    }
    fin.close();
    text->setText(readinfo);

}

void MainWindow::file_close()
{
    text->setText("");
    filename="";
}

void MainWindow::file_save()
{
    filename=QFileDialog::getSaveFileName();
    if(filename.isEmpty())
    {
        QMessageBox::information(this,"关于刘海华","注意写一个文件名");
        return ;
    }

    QString info=text->toPlainText().toStdString().c_str();//获取
    ofstream fout(filename.toStdString().c_str());
    if(!fout)
    {
        QMessageBox::information(this,"关于刘海华","打开文件失败");
        return ;
    }

    fout.write(info.toStdString().c_str(),strlen(info.toStdString().c_str()));
    fout.close();
}

void MainWindow::file_exit()
{
    exit(0);
}

void MainWindow::edit_selall()
{
    text->selectAll();
}

void MainWindow::edit_cut()
{
    text->cut();
}

void MainWindow::edit_copy()
{
    text->copy();
}

void MainWindow::edit_paste()
{
    text->paste();
}

void MainWindow::build_it()
{
    QString destexename=filename;
    //gcc    g++
    bool iscpp= destexename.contains(".cpp");
    QString cmd;
    if(iscpp)
    {
        destexename.replace(".cpp",".exe");
        cmd="g++ -o"+filename+" "+destexename;
    }
    else
    {
        destexename.replace(".c",".exe");
        cmd="gcc -o"+filename+destexename;
    }

    system(cmd.toStdString().c_str());


}

void MainWindow::build_andrus()
{
    QString destexename=filename;
    //gcc    g++
    bool iscpp= destexename.contains(".cpp");
    QString cmd;
    if(iscpp)
    {
        destexename.replace(".cpp",".exe");
        cmd="g++ -o"+destexename+" "+filename;
    }
    else
    {
        destexename.replace(".c",".exe");
        cmd="gcc -o"+destexename+" "+filename;
    }

    system(cmd.toStdString().c_str());
    system(destexename.toStdString().c_str());
}


void MainWindow::about_it()
{
    QMessageBox::information(this,"关于刘海花","版权所有，盗版不究，源码开发，本人QQ23940579302,开源的狂热爱好者，爱生活");
}


