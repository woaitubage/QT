#ifndef TIMER_H
#define TIMER_H

#include <QWidget>
#include <QTimer>
#include <QTimerEvent>
#include <QLabel>

namespace Ui {
class Timer;
}

class Timer : public QWidget
{
    Q_OBJECT

public:
    explicit Timer(QWidget *parent = 0);
    ~Timer();

private:
    Ui::Timer *ui;
    QLabel *label;

protected:
    void timerEvent(QTimerEvent *e);
};

#endif // TIMER_H
