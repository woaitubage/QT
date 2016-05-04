#ifndef SLIDER_H
#define SLIDER_H

#include <QWidget>
#include <QLabel>
#include <QSlider>


namespace Ui {
class Slider;
}

class Slider : public QWidget
{
    Q_OBJECT

public:
    explicit Slider(QWidget *parent = 0);
    ~Slider();

private:
    Ui::Slider *ui;
    QSlider *slider;
    QLabel *label;

};

#endif // SLIDER_H
