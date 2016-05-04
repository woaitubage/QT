
#include "verticalbox.h"
#include "ui_verticalbox.h"
#include  <QVBoxLayout>
#include <QPushButton>

VerticalBox::VerticalBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerticalBox)
{
    ui->setupUi(this);

    QVBoxLayout *vbox=new QVBoxLayout(this);
    vbox->setSpacing(1);  // Widget设置之间的间隔

    QPushButton *settings=new QPushButton("settings",this);
    settings->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QPushButton *accounts=new QPushButton("accouts",this);
    accounts->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QPushButton *loans=new QPushButton("loans",this);
    loans->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    QPushButton *cash = new QPushButton("Cash", this);
    cash->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QPushButton *debts = new QPushButton("Debts", this);
    debts->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox->addWidget(settings);
    vbox->addWidget(accounts);
    vbox->addWidget(loans);
    vbox->addWidget(cash);
    vbox->addWidget(debts);

    setLayout(vbox);



}

VerticalBox::~VerticalBox()
{
    delete ui;
}
