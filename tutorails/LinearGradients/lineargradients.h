#ifndef LINEARGRADIENTS_H
#define LINEARGRADIENTS_H

#include <QWidget>

namespace Ui {
class LinearGradients;
}

class LinearGradients : public QWidget
{
    Q_OBJECT

public:
    explicit LinearGradients(QWidget *parent = 0);
    ~LinearGradients();

private:
    Ui::LinearGradients *ui;
    void doPainting();


protected:
    void paintEvent(QPaintEvent *e);

};

#endif // LINEARGRADIENTS_H
