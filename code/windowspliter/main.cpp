#include "mainwindow.h"
#include <QApplication>
#include <QSplitter>  //切割
#include <QTextCodec>
#include <QTextEdit>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
    //w.show();


    QSplitter *spmain=new QSplitter(Qt::Horizontal,0);//左右分割
    QTextEdit *textleft=new QTextEdit("left",spmain);
    textleft->setAlignment(Qt::AlignLeft);

    QSplitter *spright=new QSplitter(Qt::Vertical,spmain);
    QTextEdit *textup=new QTextEdit("right  up",spright);
    textup->setAlignment(Qt::AlignLeft);

     QSplitter *spdown=new QSplitter(Qt::Vertical,spright);
     QTextEdit *textdown=new QTextEdit("right   down",spdown);
     textdown->setAlignment(Qt::AlignLeft);


    spmain->show();

    return a.exec();
}
