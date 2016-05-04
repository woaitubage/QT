#ifndef COMBOBOXEX_H
#define COMBOBOXEX_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>

namespace Ui {
class ComboBoxEx;
}

class ComboBoxEx : public QWidget
{
    Q_OBJECT

public:
    explicit ComboBoxEx(QWidget *parent = 0);
    ~ComboBoxEx();

private:
    Ui::ComboBoxEx *ui;
    QComboBox *combo;
    QLabel *label;
};

#endif // COMBOBOXEX_H
