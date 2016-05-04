#include "tabel.h"
#include "ui_tabel.h"
#include <QHBoxLayout>
#include <QTableWidget>

Tabel::Tabel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabel)
{
    ui->setupUi(this);
    QHBoxLayout *hbox=new QHBoxLayout(this);
    QTableWidget *table=new QTableWidget(25,25,this);
    hbox->addWidget(table);

}

Tabel::~Tabel()
{
    delete ui;
}
