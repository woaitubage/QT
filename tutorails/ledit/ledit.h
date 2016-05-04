#ifndef LEDIT_H
#define LEDIT_H

#include <QWidget>

namespace Ui {
class Ledit;
}

class Ledit : public QWidget
{
    Q_OBJECT

public:
    explicit Ledit(QWidget *parent = 0);
    ~Ledit();

private:
    Ui::Ledit *ui;
};

#endif // LEDIT_H
