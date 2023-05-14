#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <videothread.h>
#include <QMainWindow>
#include <QUdpSocket>
#include <QSlider>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    videothread *camImg;
    void setGestureText1(QString gesture);
    void setGestureText2(QString gesture);
    void setGestureText3(QString gesture);
public slots:
    void onNewCamImg(QImage qimg);

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_lineEdit_inputRejected();

    void on_Green_clicked();

    void on_Skora_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSlider_3_sliderMoved(int position);

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_horizontalSlider_4_sliderMoved(int position);

    void on_horizontalSlider_5_sliderMoved(int position);

    void on_horizontalSlider_6_sliderMoved(int position);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    int hmin, smin, vmin, hmax, smax, vmax;
    cv::Scalar hsvmin, hsvmax;


signals:
    void setScalarMin(cv::Scalar h1);
    void setScalarMax(cv::Scalar h1);

};

#endif // MAINWINDOW_H
