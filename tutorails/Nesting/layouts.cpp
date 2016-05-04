#include "layouts.h"
#include "ui_layouts.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QPushButton>

Layouts::Layouts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Layouts)
{
    ui->setupUi(this);
    QVBoxLayout *vbox=new QVBoxLayout();
    QHBoxLayout *hbox=new QHBoxLayout(this);

    QListWidget *lw=new QListWidget(this);
    lw->addItem("this Omen");
    lw->addItem("The Exorcist");
    lw->addItem("Notes on a scandal");
    lw->addItem("Fargo");
    lw->addItem("Capote");


    QPushButton *add=new QPushButton("add",this);
    QPushButton *rename=new QPushButton("Rename",this);
    QPushButton *remove= new QPushButton("Remove",this);
    QPushButton *removeall=new QPushButton("Remove All",this);

    vbox->setSpacing(10); //按钮之间的间隔
    vbox->addStretch(1);   //设置空白伸缩量
    vbox->addWidget(add);
    vbox->addWidget(rename);
    vbox->addWidget(remove);
    vbox->addWidget(removeall);
    vbox->addStretch(5);

    hbox->addWidget(lw);
    hbox->addSpacing(150);
    hbox->addLayout(vbox);

    setLayout(hbox);


}

Layouts::~Layouts()
{
    delete ui;
}
