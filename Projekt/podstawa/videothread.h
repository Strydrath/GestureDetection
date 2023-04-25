#ifndef VIDEOTHREAD_H
#define VIDEOTHREAD_H

#include <QThread>
#include <QtCore>
#include <QImage>
#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QMutex>
#include <QMutexLocker>
#include <algorithm>
#include <QMainWindow>
#include <QUdpSocket>



//opencv
//DODAC TE BIBLIOTEKE DLA WERSJI OPENCV 2
//#include <cv.h>
//
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "opencv2/highgui/highgui_c.h"



class videothread : public QThread
{
    Q_OBJECT
public:
    explicit videothread(QObject *parent = 0);

    void run();
    void stop();
    void videoInit(QString fName);

    cv::VideoCapture capture;
    cv::Mat input_img;

    cv::Scalar min_val, max_val;
    //konversja cv::Mat na QImage
    QImage qinputimage(const cv::Mat &mat);
    QUdpSocket *udpSocket;
public slots:
    void getScalarMin(cv::Scalar s1);
    void getScalarMax(cv::Scalar s1);

private:
    bool vidFromFile;
    int frame_count;

    void skin_segmentation(cv::Mat img, cv::Mat &mask, cv::Scalar min, cv::Scalar max);
    void feature_detection(cv::Mat mask, cv::Rect &rect, cv::Rect &rect2, std::vector<cv::Point> &hull_points, std::vector<cv::Point> &def_points);

    void gesture_detection(cv::Rect rect, std::vector<cv::Point> hull_points, std::vector<cv::Point> def_points);
    void draw_features(cv::Mat img, cv::Rect rect,cv::Rect rect2, std::vector<cv::Point> hull_points, std::vector<cv::Point> def_points);

    double dist(cv::Point p1, cv::Point p2);
signals:
    void NewCamImg(QImage);
    void gestureDetected1(QString gesture);
    void gestureDetected2(QString gesture);
    void gestureDetected3(QString gesture);

};

#endif // VIDEOTHREAD_H
