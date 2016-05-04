#ifndef MYCLOCK_H
#define MYCLOCK_H

#include <QObject>
#include <QLCDNumber>
#include <QWidget>
#include <QMouseEvent>


class myclock : public QLCDNumber
{
    Q_OBJECT
public:
    myclock(QWidget *parent=0);
    //void mousePressEvent(QMouseEvent *e);
    //void mouseMoveEvent(QMouseEvent *e);


private:
    QPoint pos;
    bool showcolon;

private slots:
    void showtime();
};

#endif // MYCLOCK_H
