#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    udpSocket = new QUdpSocket(this);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString d = ui->lineEdit->text();
    QByteArray ByteData;
    QString m = trUtf8("sensor-update info od Marcin %1").arg(d.toInt());
    ByteData.append(m);
    udpSocket->writeDatagram(ByteData, QHostAddress::Broadcast, 42001);
    qDebug()<<d;
}
