#ifndef VERTICALBOX_H
#define VERTICALBOX_H

#include <QWidget>

namespace Ui {
class VerticalBox;
}

class VerticalBox : public QWidget
{
    Q_OBJECT

public:
    explicit VerticalBox(QWidget *parent = 0);
    ~VerticalBox();

private:
    Ui::VerticalBox *ui;
};

#endif // VERTICALBOX_H
