#ifndef RADIALGRADIENT_H
#define RADIALGRADIENT_H

#include <QWidget>

namespace Ui {
class RadialGradient;
}

class RadialGradient : public QWidget
{
    Q_OBJECT

public:
    explicit RadialGradient(QWidget *parent = 0);
    ~RadialGradient();


private:
    Ui::RadialGradient *ui;
    void doPainting();

protected:
    void paintEvent(QPaintEvent *e);

};

#endif // RADIALGRADIENT_H
