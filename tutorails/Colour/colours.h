#ifndef COLOURS_H
#define COLOURS_H

#include <QWidget>

namespace Ui {
class Colours;
}

class Colours : public QWidget
{
    Q_OBJECT

public:
    explicit Colours(QWidget *parent = 0);
    ~Colours();

private:
    Ui::Colours *ui;
    void doPainting();


protected:
    void paintEvent(QPaintEvent *e);

};

#endif // COLOURS_H
