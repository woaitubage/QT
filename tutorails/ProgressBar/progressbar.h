#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include <QWidget>
#include <QPushButton>
#include <QProgressBar>


namespace Ui {
class ProgressBar;
}

class ProgressBar : public QWidget
{
    Q_OBJECT

public:
    explicit ProgressBar(QWidget *parent = 0);
    ~ProgressBar();

private:
    Ui::ProgressBar *ui;
    int progress;
    QTimer *timer;
    QProgressBar *pbar;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    static const int DELAY=200;
    static const int MAX_VALUE=100;

    void updateBar();
    void startMyTimer();
    void stopMyTimer();






};

#endif // PROGRESSBAR_H
