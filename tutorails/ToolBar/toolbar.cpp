#include "toolbar.h"
#include "ui_toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QPixmap>


Toolbar::Toolbar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Toolbar)
{
    ui->setupUi(this);
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");
    QToolBar *toolbar=addToolBar("main toolbar");
    toolbar->addAction(QIcon(newpix),"new File");
    toolbar->addAction(QIcon(openpix),"Open File");
    toolbar->addSeparator();
    QAction *quit=toolbar->addAction(QIcon(quitpix),"Quit Application");

    connect(quit,&QAction::triggered,qApp,QApplication::quit);



}

Toolbar::~Toolbar()
{
    delete ui;
}
