#include "taskdialog.h"
#include "ui_taskdialog.h"
#include <QtConcurrent/QtConcurrent>
#include <QProgressDialog>
#include <QtConcurrent/qtconcurrentmap.h>

TaskDialog::TaskDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaskDialog)
{
    ui->setupUi(this);
}

TaskDialog::~TaskDialog()
{
    delete ui;
}

void spin(int &iteration)
{
    const int work=1000*1000*40;
    volatile  int v=0;
    for(int j=0;j<work;++j)
    {
        ++v;

    }
    qDebug()<<"iteration "<<iteration<<"in thread"<<QThread::currentThreadId();

}





void TaskDialog::on_pushButton_clicked()
{
    int iteration =ui->spinBox->text().toInt();
    QVector<int>vector;
    for(int i=0;i<iteration;++i)
        vector.append(i);

    QProgressDialog dialog;
    dialog.setLabelText(QString("Progressing using %1 thread(s)...").arg(QThread::idealThreadCount()));

    QFutureWatcher<void> futureWatcher;
    QObject::connect(&futureWatcher,SIGNAL(finished()),&dialog,SLOT(reset()));
    QObject::connect(&dialog,SIGNAL(canceled()),&dialog,SLOT(cancel()));
    QObject::connect(&futureWatcher,SIGNAL(progressRangeChanged(int,int)),&dialog,SLOT(setRange(int,int)));
    QObject::connect(&futureWatcher,SIGNAL(progressValueChanged(int)),&dialog,SLOT(setValue(int)));

     //start the computation
    futureWatcher.setFuture(QtConcurrent::map(vector,spin));

    //Display the dialog and start the event loop
    dialog.exec();
    futureWatcher.waitForFinished();

    //Query the future to checkk if was canceled
    qDebug()<<"Camceled?"<<futureWatcher.future().isCanceled();


}

void TaskDialog::on_pushButton_2_clicked()
{

}
