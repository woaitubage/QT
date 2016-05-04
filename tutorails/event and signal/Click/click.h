#ifndef CLICK_H
#define CLICK_H

#include <QWidget>

namespace Ui {
class Click;
}

class Click : public QWidget
{
    Q_OBJECT

public:
    explicit Click(QWidget *parent = 0);
    ~Click();

private:
    Ui::Click *ui;
};

#endif // CLICK_H
