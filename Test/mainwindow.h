#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QTimer>
#include <QDebug>
#include <QUrl>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_m_TmRefresh_timeout();
    void on_m_LineEditTimeRefresh_editingFinished();
    void on_m_networkManager_finished(QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
    QPushButton *m_btExit;
    QLineEdit *m_LineEditHigh;
    QLabel *m_LblHigh;
    QLineEdit *m_LineEditLast;
    QLabel *m_LblLast;
    QLineEdit *m_LineEditTimeStamp;
    QLabel *m_LblTimeStamp;
    QLineEdit *m_LineEditBid;
    QLabel *m_LblBid;
    QLineEdit *m_LineEditVwap;
    QLabel *m_LblVwap;
    QLineEdit *m_LineEditVolume;
    QLabel *m_LblVolume;
    QLineEdit *m_LineEditLow;
    QLabel *m_LblLow;
    QLineEdit *m_LineEditAsk;
    QLabel *m_LblAsk;
    QLineEdit *m_LineEditOpen;
    QLabel *m_LblOpen;
    QLineEdit *m_LineEditTimeRefresh;
    QLabel *m_LblTimeRefresh;

    QTimer *m_TmRefresh;
    int m_nSecRefresh;

    QNetworkAccessManager *m_networkManager;
};

#endif // MAINWINDOW_H
