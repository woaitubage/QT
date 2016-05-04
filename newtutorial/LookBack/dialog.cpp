#include "dialog.h"
#include "ui_dialog.h"


static const int TotalBytes = 50 * 1024 * 1024;
static const int PayloadSize = 64 * 1024; // 64 KB

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->pushButton_2->setEnabled(false);

    connect(&tcpServer, SIGNAL(newConnection()),
            this, SLOT(acceptConnection()));
    connect(&tcpClient, SIGNAL(connected()),
            this, SLOT(clientSendMessageToServer()));
    connect(&tcpClient, SIGNAL(bytesWritten(qint64)),
            this, SLOT(updateClientProgress(qint64)));
    connect(&tcpClient, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(displayError(QAbstractSocket::SocketError)));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::startListening()
{
    ui->pushButton->setEnabled(false);

    bytesWritten =0;
    bytesReceived=0;
    while(!tcpServer.isListening() && !tcpServer.listen())
    {
        QMessageBox::StandardButton ret=QMessageBox::critical((this),
                                                              tr("lookback"),
                                                              tr("unable to start the test:%1")
                                                              .arg(tcpServer.errorString()),
                                                              QMessageBox::Retry |QMessageBox::Cancel);
        if (ret == QMessageBox::Cancel)
                    return;
    }
    ui->label->setText(tr("Listening "));
    ui->pushButton_2->setEnabled(true);

}

void Dialog::requestConnecting()
{
    ui->pushButton_2->setEnabled(false);
    ui->label_2->setText(tr("connecting"));
    tcpClient.connectToHost(QHostAddress::LocalHost, tcpServer.serverPort());
    //that is will emit a newConnection() signal
}

void Dialog::acceptConnect()
{
    tcpServerConnection=tcpServer.nextPendingConnection();
    connect(tcpServerConnection, SIGNAL(readyRead()),
              this, SLOT(updateServerProgress()));
      connect(tcpServerConnection, SIGNAL(error(QAbstractSocket::SocketError)),
              this, SLOT(displayError(QAbstractSocket::SocketError)));
      ui->label->setText(tr("Accepted connection"));
      tcpServer.close();

}

void Dialog::clientSendMessageToServer()
{
    // called when the TCP client connected to the loopback server
       bytesToWrite = TotalBytes - (int)tcpClient.write(QByteArray(PayloadSize, '@'));
       ui->label_2->setText(tr("Connected"));
}

void Dialog::updateServerProgress()
{
    bytesReceived += (int)tcpServerConnection->bytesAvailable();
       tcpServerConnection->readAll();

       ui->progressBar->setMaximum(TotalBytes);
       ui->progressBar->setValue(bytesReceived);
       ui->label->setText(tr("Received %1MB")
                                  .arg(bytesReceived / (1024 * 1024)));

       if (bytesReceived == TotalBytes) {
           tcpServerConnection->close();
           ui->pushButton->setEnabled(true);
   #ifndef QT_NO_CURSOR
           QApplication::restoreOverrideCursor();
#endif
       }

}

void Dialog::updateClientProgress(qint64 numBytes)
{
    // callen when the TCP client has written some bytes
       bytesWritten += (int)numBytes;

       // only write more if not finished and when the Qt write buffer is below a certain size.
       if (bytesToWrite > 0 && tcpClient.bytesToWrite() <= 4*PayloadSize)
           bytesToWrite -= (int)tcpClient.write(QByteArray(qMin(bytesToWrite, PayloadSize), '@'));

       ui->progressBar_2->setMaximum(TotalBytes);
       ui->progressBar_2->setValue(bytesWritten);
       ui->label_2->setText(tr("Sent %1MB")
                            .arg(bytesWritten / (1024 * 1024)));
}

void Dialog::displayError(QAbstractSocket::SocketError socketError)
{
    if (socketError == QTcpSocket::RemoteHostClosedError)
            return;

        QMessageBox::information(this, tr("Network error"),
                                 tr("The following error occurred: %1.")
                                 .arg(tcpClient.errorString()));

        tcpClient.close();

        // Calling close() makes QTcpServer stop listening for incoming connections.
        tcpServer.close();

        ui->progressBar_2->reset();
        ui->progressBar->reset();
        ui->label_2->setText(tr("Client ready"));
        ui->label->setText(tr("Server ready"));
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(false);
    #ifndef QT_NO_CURSOR
        QApplication::restoreOverrideCursor();
    #endif
}


