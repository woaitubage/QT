#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QStringListModel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_Add_PushButton_clicked();

    void on_Insert_PushButton_clicked();

    void on_Delete_PushButton_clicked();

private:
    Ui::Dialog *ui;
    QStringListModel *model;

};

#endif // DIALOG_H
