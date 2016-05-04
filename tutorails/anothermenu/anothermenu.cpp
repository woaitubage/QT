#include "anothermenu.h"
#include "ui_anothermenu.h"
#include <QPixmap>
#include <QAction>
#include <QMenu>


AnotherMenu::AnotherMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnotherMenu)
{
    ui->setupUi(this);
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");

    QAction *newa =new QAction(newpix,"&New",this);
    QAction *open=new QAction(openpix,"&Open",this);
    QAction *quit=new QAction(quitpix,"&Quit",this);
    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file;
    file=menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(open);
    file->addSeparator();
    file->addAction(quit);


    qApp->setAttribute(Qt::AA_DontShowIconsInMenus,false);
    connect(quit,&QAction::triggered,qApp,&QApplication::quit);



}

AnotherMenu::~AnotherMenu()
{
    delete ui;
}
