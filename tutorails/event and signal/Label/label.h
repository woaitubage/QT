#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Label;
}

class Label : public QWidget
{
    Q_OBJECT

public:
    explicit Label(QWidget *parent = 0);
    ~Label();

private:
    Ui::Label *ui;

private:
    QLabel *label;

};

#endif // LABEL_H
