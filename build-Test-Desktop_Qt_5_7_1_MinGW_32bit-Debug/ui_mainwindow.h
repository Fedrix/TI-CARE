/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *m_btExit;
    QLineEdit *m_LineEditHigh;
    QLabel *m_LblHigh;
    QLabel *m_LblLast;
    QLineEdit *m_LineEditLast;
    QLabel *m_LblTimeStamp;
    QLineEdit *m_LineEditTimeStamp;
    QLabel *m_LblBid;
    QLineEdit *m_LineEditBid;
    QLabel *m_LblVwap;
    QLineEdit *m_LineEditVwap;
    QLabel *m_LblVolume;
    QLineEdit *m_LineEditVolume;
    QLabel *m_LblLow;
    QLineEdit *m_LineEditLow;
    QLabel *m_LblAsk;
    QLineEdit *m_LineEditAsk;
    QLabel *m_LblOpen;
    QLineEdit *m_LineEditOpen;
    QLabel *m_LblTimeRefresh;
    QLineEdit *m_LineEditTimeRefresh;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 300));
        MainWindow->setMaximumSize(QSize(500, 300));
        MainWindow->setSizeIncrement(QSize(16, 69));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Users/fno/Pictures/TiCare.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_btExit = new QPushButton(centralWidget);
        m_btExit->setObjectName(QStringLiteral("m_btExit"));
        m_btExit->setGeometry(QRect(410, 220, 75, 23));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_btExit->sizePolicy().hasHeightForWidth());
        m_btExit->setSizePolicy(sizePolicy1);
        m_btExit->setMaximumSize(QSize(520, 220));
        m_btExit->setCheckable(true);
        m_btExit->setChecked(true);
        m_LineEditHigh = new QLineEdit(centralWidget);
        m_LineEditHigh->setObjectName(QStringLiteral("m_LineEditHigh"));
        m_LineEditHigh->setEnabled(false);
        m_LineEditHigh->setGeometry(QRect(90, 10, 113, 20));
        m_LineEditHigh->setAlignment(Qt::AlignCenter);
        m_LblHigh = new QLabel(centralWidget);
        m_LblHigh->setObjectName(QStringLiteral("m_LblHigh"));
        m_LblHigh->setGeometry(QRect(10, 10, 75, 16));
        m_LblLast = new QLabel(centralWidget);
        m_LblLast->setObjectName(QStringLiteral("m_LblLast"));
        m_LblLast->setGeometry(QRect(10, 50, 75, 16));
        m_LineEditLast = new QLineEdit(centralWidget);
        m_LineEditLast->setObjectName(QStringLiteral("m_LineEditLast"));
        m_LineEditLast->setEnabled(false);
        m_LineEditLast->setGeometry(QRect(90, 50, 113, 20));
        m_LineEditLast->setAlignment(Qt::AlignCenter);
        m_LblTimeStamp = new QLabel(centralWidget);
        m_LblTimeStamp->setObjectName(QStringLiteral("m_LblTimeStamp"));
        m_LblTimeStamp->setGeometry(QRect(10, 90, 75, 16));
        m_LineEditTimeStamp = new QLineEdit(centralWidget);
        m_LineEditTimeStamp->setObjectName(QStringLiteral("m_LineEditTimeStamp"));
        m_LineEditTimeStamp->setEnabled(false);
        m_LineEditTimeStamp->setGeometry(QRect(90, 90, 113, 20));
        m_LineEditTimeStamp->setAlignment(Qt::AlignCenter);
        m_LblBid = new QLabel(centralWidget);
        m_LblBid->setObjectName(QStringLiteral("m_LblBid"));
        m_LblBid->setGeometry(QRect(10, 130, 75, 16));
        m_LineEditBid = new QLineEdit(centralWidget);
        m_LineEditBid->setObjectName(QStringLiteral("m_LineEditBid"));
        m_LineEditBid->setEnabled(false);
        m_LineEditBid->setGeometry(QRect(90, 130, 113, 20));
        m_LineEditBid->setAlignment(Qt::AlignCenter);
        m_LblVwap = new QLabel(centralWidget);
        m_LblVwap->setObjectName(QStringLiteral("m_LblVwap"));
        m_LblVwap->setEnabled(true);
        m_LblVwap->setGeometry(QRect(10, 170, 75, 16));
        m_LineEditVwap = new QLineEdit(centralWidget);
        m_LineEditVwap->setObjectName(QStringLiteral("m_LineEditVwap"));
        m_LineEditVwap->setEnabled(false);
        m_LineEditVwap->setGeometry(QRect(90, 170, 113, 20));
        m_LineEditVwap->setAlignment(Qt::AlignCenter);
        m_LblVolume = new QLabel(centralWidget);
        m_LblVolume->setObjectName(QStringLiteral("m_LblVolume"));
        m_LblVolume->setGeometry(QRect(290, 10, 75, 16));
        m_LineEditVolume = new QLineEdit(centralWidget);
        m_LineEditVolume->setObjectName(QStringLiteral("m_LineEditVolume"));
        m_LineEditVolume->setEnabled(false);
        m_LineEditVolume->setGeometry(QRect(370, 10, 113, 20));
        m_LineEditVolume->setAlignment(Qt::AlignCenter);
        m_LblLow = new QLabel(centralWidget);
        m_LblLow->setObjectName(QStringLiteral("m_LblLow"));
        m_LblLow->setGeometry(QRect(290, 50, 75, 16));
        m_LineEditLow = new QLineEdit(centralWidget);
        m_LineEditLow->setObjectName(QStringLiteral("m_LineEditLow"));
        m_LineEditLow->setEnabled(false);
        m_LineEditLow->setGeometry(QRect(370, 50, 113, 20));
        m_LineEditLow->setAlignment(Qt::AlignCenter);
        m_LblAsk = new QLabel(centralWidget);
        m_LblAsk->setObjectName(QStringLiteral("m_LblAsk"));
        m_LblAsk->setGeometry(QRect(290, 90, 75, 16));
        m_LineEditAsk = new QLineEdit(centralWidget);
        m_LineEditAsk->setObjectName(QStringLiteral("m_LineEditAsk"));
        m_LineEditAsk->setEnabled(false);
        m_LineEditAsk->setGeometry(QRect(370, 90, 113, 20));
        m_LineEditAsk->setAlignment(Qt::AlignCenter);
        m_LblOpen = new QLabel(centralWidget);
        m_LblOpen->setObjectName(QStringLiteral("m_LblOpen"));
        m_LblOpen->setGeometry(QRect(290, 130, 75, 16));
        m_LineEditOpen = new QLineEdit(centralWidget);
        m_LineEditOpen->setObjectName(QStringLiteral("m_LineEditOpen"));
        m_LineEditOpen->setEnabled(false);
        m_LineEditOpen->setGeometry(QRect(370, 130, 113, 20));
        m_LineEditOpen->setAlignment(Qt::AlignCenter);
        m_LblTimeRefresh = new QLabel(centralWidget);
        m_LblTimeRefresh->setObjectName(QStringLiteral("m_LblTimeRefresh"));
        m_LblTimeRefresh->setGeometry(QRect(290, 170, 75, 16));
        m_LineEditTimeRefresh = new QLineEdit(centralWidget);
        m_LineEditTimeRefresh->setObjectName(QStringLiteral("m_LineEditTimeRefresh"));
        m_LineEditTimeRefresh->setGeometry(QRect(370, 170, 113, 20));
        m_LineEditTimeRefresh->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(m_btExit, m_LineEditHigh);
        QWidget::setTabOrder(m_LineEditHigh, m_LineEditVolume);
        QWidget::setTabOrder(m_LineEditVolume, m_LineEditLast);
        QWidget::setTabOrder(m_LineEditLast, m_LineEditLow);
        QWidget::setTabOrder(m_LineEditLow, m_LineEditTimeStamp);
        QWidget::setTabOrder(m_LineEditTimeStamp, m_LineEditAsk);
        QWidget::setTabOrder(m_LineEditAsk, m_LineEditBid);
        QWidget::setTabOrder(m_LineEditBid, m_LineEditOpen);
        QWidget::setTabOrder(m_LineEditOpen, m_LineEditVwap);
        QWidget::setTabOrder(m_LineEditVwap, m_LineEditTimeRefresh);

        retranslateUi(MainWindow);
        QObject::connect(m_btExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test", Q_NULLPTR));
        m_btExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        m_LblHigh->setText(QApplication::translate("MainWindow", "High :", Q_NULLPTR));
        m_LblLast->setText(QApplication::translate("MainWindow", "Last :", Q_NULLPTR));
        m_LblTimeStamp->setText(QApplication::translate("MainWindow", "TimeStamp : ", Q_NULLPTR));
        m_LblBid->setText(QApplication::translate("MainWindow", "Bid : ", Q_NULLPTR));
        m_LblVwap->setText(QApplication::translate("MainWindow", "Vwap : ", Q_NULLPTR));
        m_LblVolume->setText(QApplication::translate("MainWindow", "Volume : ", Q_NULLPTR));
        m_LblLow->setText(QApplication::translate("MainWindow", "Low : ", Q_NULLPTR));
        m_LblAsk->setText(QApplication::translate("MainWindow", "Ask : ", Q_NULLPTR));
        m_LblOpen->setText(QApplication::translate("MainWindow", "Open : ", Q_NULLPTR));
        m_LblTimeRefresh->setText(QApplication::translate("MainWindow", "Time Refresh :", Q_NULLPTR));
        m_LineEditTimeRefresh->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
