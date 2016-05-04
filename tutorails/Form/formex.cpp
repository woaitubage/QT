#include "formex.h"
#include "ui_formex.h"
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>


FormEx::FormEx(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormEx)
{
    ui->setupUi(this);
    QLineEdit *nameEdit=new QLineEdit(this);
    QLineEdit *addrEdit=new QLineEdit(this);
    QLineEdit *occpEdit=new QLineEdit(this);

    QFormLayout *formLayout =new QFormLayout;
    formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignVCenter);
    formLayout->addRow("Name:",nameEdit);
    formLayout->addRow("Email:",addrEdit);
    formLayout->addRow("Age:",occpEdit);

    setLayout(formLayout);
}

FormEx::~FormEx()
{
    delete ui;
}
