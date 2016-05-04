#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *centralWidget=new QWidget;

    QLabel *fontLabel=new QLabel(tr("Font:"));
    fontCombo =new QFontComboBox;
    QLabel *sizeLabel =new QLabel(tr("Size:"));
    sizeCombo =new QComboBox;
    QLabel *styleLabel=new QLabel(tr("Style:"));
    styleCombo =new QComboBox;
    QLabel *fontMeringLabel=new Qlabel(tr("Automatic Font Mergint:"));
    fontMerging=new QCheckBox;
    fontMerging->setChecked(true);

    scrollArea =new QScrollArea;
    characterWidget =new characterWidget;
    scrollArea->setWidget(characterWidget);

    findStyles(fontCombo->currentData());

    lineEdit=new QLineEdit;
#ifndef QT_NO_CLIPBOARD
    QPushButton *clipboardButton =new QpushButton(tr("&To clipboard"));

    connect(fontCombo, SIGNAL(currentFontChanged(QFont)),
            this, SLOT(findStyles(QFont)));
    connect(fontCombo, SIGNAL(currentFontChanged(QFont)),
            this, SLOT(findSizes(QFont)));
    connect(fontCombo, SIGNAL(currentFontChanged(QFont)),
            characterWidget, SLOT(updateFont(QFont)));
    connect(sizeCombo, SIGNAL(currentIndexChanged(QString)),
            characterWidget, SLOT(updateSize(QString)));
    connect(styleCombo, SIGNAL(currentIndexChanged(QString)),
            characterWidget, SLOT(updateStyle(QString)));

}
