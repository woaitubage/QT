#include "fly.h"
#include <QApplication>
#include <QGraphicsScene>   //场景
#include <QGraphicsView>    //视图



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene=new QGraphicsScene;
    scene->setSceneRect(QRectF(-300,-200,400,500));

    fly *afu=new fly;
    afu->setPos(-100,0);

    scene->addItem(*afu);


    QGraphicsView *view=new QGraphicsView;
    view->setScene(scene);
    view->resize(800,600);
    view->show();




    return a.exec();
}
