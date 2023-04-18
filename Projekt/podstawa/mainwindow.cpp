#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    camImg = new videothread(this);

    //połączenie sygnał slot
    connect(camImg, SIGNAL(NewCamImg(QImage)), this, SLOT(onNewCamImg(QImage)));
    connect(this, SIGNAL(setScalarMin(cv::Scalar)), camImg, SLOT(getScalarMin(cv::Scalar)));
    connect(this, SIGNAL(setScalarMax(cv::Scalar)), camImg, SLOT(getScalarMax(cv::Scalar)));
    connect(camImg, &videothread::gestureDetected1, this, &MainWindow::setGestureText1);
    connect(camImg, &videothread::gestureDetected2, this, &MainWindow::setGestureText2);
    connect(camImg, &videothread::gestureDetected3, this, &MainWindow::setGestureText3);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setGestureText1(QString gesture) {
    ui->lineEdit->setText(gesture);
}
void MainWindow::setGestureText2(QString gesture) {
    ui->lineEdit_2->setText(gesture);
}
void MainWindow::setGestureText3(QString gesture) {
    ui->lineEdit_3->setText(gesture);
}

void MainWindow::onNewCamImg(QImage qimg)
{
    ui->img->setPixmap(QPixmap::fromImage(qimg).scaled(ui->img->width(),ui->img->height()));
}

void MainWindow::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Video"), "../", tr("Image Files (*.mp4 *.avi *.wav)"));
    camImg->videoInit(fileName);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    hsvmin.val[0] = value;
    // = cv::Scalar(hmin, smin, vmin);
    //qDebug() << hsvmin.val[0];
    emit setScalarMin(hsvmin);

}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    hsvmin.val[2] = value;
    smin = value;
    emit setScalarMin(hsvmin);
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    hsvmin.val[1] = value;
    vmin = value;
    emit setScalarMin(hsvmin);
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    hsvmax.val[0] = value;
    vmin = value;
    emit setScalarMax(hsvmax);
}


void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    hsvmax.val[1] = value;
    vmin = value;
    emit setScalarMax(hsvmax);

}


void MainWindow::on_horizontalSlider_6_valueChanged(int value)
{
    hsvmax.val[2] = value;
    vmin = value;
    emit setScalarMax(hsvmax);
}


void MainWindow::on_lineEdit_inputRejected()
{

}


void MainWindow::on_Green_clicked()
{
    hsvmin = cv::Scalar(43,42,41);
    hsvmax = cv::Scalar(92,149,149);
    emit setScalarMin(hsvmin);
    emit setScalarMin(hsvmin);
}

