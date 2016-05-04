#ifndef SPINBOX_H
#define SPINBOX_H

#include <QWidget>
#include <QSpinBox>

namespace Ui {
class SpinBox;
}

class SpinBox : public QWidget
{
    Q_OBJECT

public:
    explicit SpinBox(QWidget *parent = 0);
    ~SpinBox();

private:
    Ui::SpinBox *ui;
    QSpinBox *spinbox;
};

#endif // SPINBOX_H
