#include "dialog.h"
#include "ui_dialog.h"
#include <QStringList>

dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);

    ui->treeWidget->setHeaderLabels(QStringList()<<"ABC"<<"123");

    addTreeRoot("A","Root_first");
    addTreeRoot("B","Root_second");
    addTreeRoot("C","Root_third");

}

dialog::~dialog()
{
    delete ui;
}


void dialog::addTreeRoot(QString name,QString description)
{
    QTreeWidgetItem *treeItem =new QTreeWidgetItem(ui->treeWidget);
    treeItem->setText(0,name);
    treeItem->setText(1,description);
    addTreeChild(treeItem,name+"A","Child_first");
    addTreeChild(treeItem,name+"B","Child_second");

}

void dialog::addTreeChild(QTreeWidgetItem *parent,QString name,QString description)
{
    QTreeWidgetItem *treeItem=new QTreeWidgetItem();
    treeItem->setText(0,name);
    treeItem->setText(1,description);

    parent->addChild(treeItem);

}

void dialog::on_pushButton_clicked()
{
    QBrush brush_red(Qt::red);
    ui->treeWidget->currentItem()->setBackground(0,brush_red);
    QBrush brush_green(Qt::green);
    ui->treeWidget->currentItem()->setBackground(1,brush_green);
}
