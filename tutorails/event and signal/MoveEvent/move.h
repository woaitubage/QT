#ifndef MOVE_H
#define MOVE_H

#include <QWidget>
#include <QMouseEvent>
//存在错误
namespace Ui {
class Move;
}

class Move : public QWidget
{
    Q_OBJECT

public:
    explicit Move(QWidget *parent = 0);
    ~Move();

private:
    Ui::Move *ui;


protected:
    void moveEvent(QMoveEvent *e);
};

#endif // MOVE_H
