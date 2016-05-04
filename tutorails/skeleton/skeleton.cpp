#include "skeleton.h"
#include "ui_skeleton.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>

Skeleton::Skeleton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Skeleton)
{
    ui->setupUi(this);
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");

    QAction *quit=new QAction("&Quit",this);

    QMenu *file;
    file=menuBar()->addMenu("&File");
    file->addAction(quit);

    connect(quit,&QAction::triggered,qApp,QApplication::quit);

    QToolBar *toolbar=addToolBar("main ToolBar");
    toolbar->addAction(QIcon(newpix),"new File");
    toolbar->addAction(QIcon(openpix),"open File");
    toolbar->addSeparator();

    QAction *quit2=toolbar->addAction(QIcon(quitpix),"Quit Application");
    connect(quit2,&QAction::triggered,qApp,&QApplication::quit);

    QTextEdit *edit=new QTextEdit(this);
    setCentralWidget(edit);

    statusBar()->showMessage("Readly");

}

Skeleton::~Skeleton()
{
    delete ui;
}
