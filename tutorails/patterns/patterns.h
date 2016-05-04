#ifndef PATTERNS_H
#define PATTERNS_H

#include <QWidget>

namespace Ui {
class Patterns;
}

class Patterns : public QWidget
{
    Q_OBJECT

public:
    explicit Patterns(QWidget *parent = 0);
    ~Patterns();

private:
    Ui::Patterns *ui;
    void  doPainting();


protected:
    void paintEvent(QPaintEvent *e);

};

#endif // PATTERNS_H
