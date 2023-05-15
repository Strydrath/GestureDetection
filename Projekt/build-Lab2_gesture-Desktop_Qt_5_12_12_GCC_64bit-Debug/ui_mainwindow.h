/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *img;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *Green;
    QPushButton *Skora;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(708, 954);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        img = new QLabel(centralWidget);
        img->setObjectName(QString::fromUtf8("img"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(img->sizePolicy().hasHeightForWidth());
        img->setSizePolicy(sizePolicy);
        img->setMinimumSize(QSize(300, 0));
        img->setMaximumSize(QSize(16777215, 400));
        img->setFrameShape(QFrame::Box);

        verticalLayout->addWidget(img);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        Green = new QPushButton(centralWidget);
        Green->setObjectName(QString::fromUtf8("Green"));

        verticalLayout->addWidget(Green);

        Skora = new QPushButton(centralWidget);
        Skora->setObjectName(QString::fromUtf8("Skora"));

        verticalLayout->addWidget(Skora);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setValue(65);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setValue(33);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_3);

        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(20);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_2);

        horizontalSlider_4 = new QSlider(centralWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setValue(80);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_4);

        horizontalSlider_5 = new QSlider(centralWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setValue(169);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_5);

        horizontalSlider_6 = new QSlider(centralWidget);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setValue(144);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMaximumSize(QSize(16777215, 100));
        label1->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(label1);

        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(label2);

        label3 = new QLabel(centralWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(label3);

        label4 = new QLabel(centralWidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(label4);

        label5 = new QLabel(centralWidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(label5);

        label6 = new QLabel(centralWidget);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setEnabled(true);
        label6->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(label6);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 708, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        img->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PLAY FROM FILE", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Yellow", nullptr));
        Green->setText(QApplication::translate("MainWindow", "Green", nullptr));
        Skora->setText(QApplication::translate("MainWindow", "Skora", nullptr));
        label1->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label3->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label4->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label5->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label6->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
