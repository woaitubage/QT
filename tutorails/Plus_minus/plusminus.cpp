#include "plusminus.h"
#include "ui_plusminus.h"
#include <QGridLayout>

PlusMinus::PlusMinus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlusMinus)
{
    ui->setupUi(this);
    QPushButton *plsBtn=new QPushButton("+",this);
    QPushButton *minBtn=new QPushButton("-",this);

    lbl=new QLabel("0",this);

    QGridLayout *grid=new QGridLayout(this);
    grid->addWidget(plsBtn,0,0);
    grid->addWidget(minBtn,0,1);
    grid->addWidget(lbl,1,1);

    setLayout(grid);

    connect(plsBtn,&QPushButton::clicked,this,&PlusMinus::OnPlus);
    connect(minBtn,&QPushButton::clicked,this,&PlusMinus::OnMinus);




}

PlusMinus::~PlusMinus()
{
    delete ui;
}

void PlusMinus::OnPlus()
{
    int val=lbl->text().toInt();
    val++;
    lbl->setText(QString::number(val));
}

void PlusMinus::OnMinus()
{
    int val=lbl->text().toInt();
    val--;
    lbl->setText(QString::number(val));
}
