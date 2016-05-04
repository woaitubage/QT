#include "comboboxex.h"
#include "ui_comboboxex.h"
#include <QHBoxLayout>

ComboBoxEx::ComboBoxEx(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ComboBoxEx)
{
    ui->setupUi(this);

    QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian",
          "Mandriva"};

    QHBoxLayout *hbox=new QHBoxLayout(this);

    combo=new QComboBox();
    combo->addItems(distros);
    hbox->addWidget(combo);
    hbox->addSpacing(15);

    label=new QLabel("Arch",this);
    hbox->addWidget(label);
    connect(combo,static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::activated),
            label,&QLabel::setText);

}

ComboBoxEx::~ComboBoxEx()
{
    delete ui;
}
