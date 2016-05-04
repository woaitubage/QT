#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
/*
    scene = new QGraphicsScene (this);
    ui->graphicsView->setScene(scene);

    QBrush greenBrush(Qt::green);
    QBrush blueBrush(Qt::blue);
    QPen outlinePen(Qt::black);  //设置画笔
    outlinePen.setWidth(2);

    rectangle = scene->addRect(100,0,80,100,outlinePen,blueBrush);
    ellipse=scene->addEllipse(0,-100,300,60,outlinePen,greenBrush);
    text=scene->addText("bogotobogo.com",QFont("Arial",20));
    text->setFlag(QGraphicsItem::ItemIsMovable);
*/

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    scene->setSceneRect(-150,-150,300,300);

    QLineF topLine(scene->sceneRect().topLeft(),
                   scene->sceneRect().topRight());

    QLineF leftLine(scene->sceneRect().topLeft(),
                      scene->sceneRect().bottomLeft());
    QLineF rightLine(scene->sceneRect().topRight(),
                      scene->sceneRect().bottomRight());
    QLineF bottomLine(scene->sceneRect().bottomLeft(),
                      scene->sceneRect().bottomRight());

    QPen myPen = QPen(Qt::red);

    scene->addLine(topLine,myPen);
    scene->addLine(leftLine,myPen);
    scene->addLine(rightLine,myPen);
    scene->addLine(bottomLine,myPen);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),scene,SLOT(advance()));


}

Dialog::~Dialog()
{
    delete ui;
}
