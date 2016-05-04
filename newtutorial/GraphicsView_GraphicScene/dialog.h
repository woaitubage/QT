#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QTimer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
/*
    QGraphicsScene *scene;
    QGraphicsEllipseItem    *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsTextItem *text;
*/
    QGraphicsScene *scene;
    QTimer *timer;


};

#endif // DIALOG_H
