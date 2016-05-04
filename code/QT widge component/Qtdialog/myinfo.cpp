#include "myinfo.h"

#include <QPushButton>

myinfo::myinfo(QWidget *parent):QDialog(parent)
{
    this->resize(200,200);
    pline =new QLineEdit(this);
    qpush=new QPushButton(this);
    qpush->setText("OK");
    qpush->move(100,100);

    connect(qpush,SIGNAL(clicked(bool)),this,SLOT(go()));




}

void myinfo::go()
{
    this->str=pline->text();
    this->hide();
}
