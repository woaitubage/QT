#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QWidget>
#include <QPaintEvent>
#include <QTimer>
#include <QPoint>

class AnalogClock : public QWidget
{
    Q_OBJECT
public:
    explicit AnalogClock(QWidget *parent = 0);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *event) ;
};

#endif // ANALOGCLOCK_H
