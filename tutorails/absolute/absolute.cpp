#include "absolute.h"
#include "ui_absolute.h"

Absolute::Absolute(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Absolute)
{
    ui->setupUi(this);
    QTextEdit *ledit=new QTextEdit(this);
    ledit->setGeometry(5,5,200,150);

}

Absolute::~Absolute()
{
    delete ui;
}
