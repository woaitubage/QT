#ifndef FORMEX_H
#define FORMEX_H

#include <QWidget>

namespace Ui {
class FormEx;
}

class FormEx : public QWidget
{
    Q_OBJECT

public:
    explicit FormEx(QWidget *parent = 0);
    ~FormEx();

private:
    Ui::FormEx *ui;
};

#endif // FORMEX_H
