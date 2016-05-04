#ifndef BURNING_H
#define BURNING_H

#include "widget.h"
#include <QWidget>
#include <QSlider>

class Widget;

namespace Ui {
class Burning;
}

class Burning : public QWidget
{
    Q_OBJECT

public:
    explicit Burning(QWidget *parent = 0);
    ~Burning();
    int getCurrentWidth();

  public slots:
    void valueChanged(int);

private:
    Ui::Burning *ui;
    QSlider *slider;
    Widget *widget;
    int cur_width;

    void initUI();
};

#endif // BURNING_H
