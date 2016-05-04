#include "spinbox.h"
#include "ui_spinbox.h"
#include <QHBoxLayout>
#include <QLabel>

SpinBox::SpinBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpinBox)
{
    ui->setupUi(this);
    QHBoxLayout *hbox=new QHBoxLayout(this);
    hbox->setSpacing(15);

    spinbox=new QSpinBox(this);
    QLabel *lbl=new QLabel("0.0",this);

    hbox->addWidget(spinbox);
    hbox->addWidget(lbl);

    connect(spinbox,static_cast<void (QSpinBox::*)(double)>(&QSpinBox::valueChanged),
            lbl,static_cast<void (QLabel::*)(double)>(&QLabel::setNum));

}

SpinBox::~SpinBox()
{
    delete ui;
}
