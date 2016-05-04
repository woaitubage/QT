#ifndef LAYOUTS_H
#define LAYOUTS_H

#include <QWidget>

namespace Ui {
class Layouts;
}

class Layouts : public QWidget
{
    Q_OBJECT

public:
    explicit Layouts(QWidget *parent = 0);
    ~Layouts();

private:
    Ui::Layouts *ui;
};

#endif // LAYOUTS_H
