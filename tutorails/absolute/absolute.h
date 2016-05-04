#ifndef ABSOLUTE_H
#define ABSOLUTE_H

#include <QWidget>
#include <QDesktopWidget>
#include <QTextEdit>

namespace Ui {
class Absolute;
}

class Absolute : public QWidget
{
    Q_OBJECT

public:
    explicit Absolute(QWidget *parent = 0);
    ~Absolute();

private:
    Ui::Absolute *ui;
};

#endif // ABSOLUTE_H
