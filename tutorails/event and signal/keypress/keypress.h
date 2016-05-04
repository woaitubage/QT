#ifndef KEYPRESS_H
#define KEYPRESS_H

#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class Keypress;
}

class Keypress : public QWidget
{
    Q_OBJECT

public:
    explicit Keypress(QWidget *parent = 0);
    ~Keypress();

private:
    Ui::Keypress *ui;


protected:
    void keyPressEvent(QKeyEvent *e);
};

#endif // KEYPRESS_H
