#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    m_btExit = new QPushButton(parent);
    //connect(m_btExit, SIGNAL (clicked()), this, SLOT (BtExitClicked()));

    m_LblHigh = new QLabel(parent);
    m_LineEditHigh = new QLineEdit(parent);
    m_LblLast = new QLabel(parent);
    m_LineEditLast = new QLineEdit(parent);
    m_LblTimeStamp = new QLabel(parent);
    m_LineEditTimeStamp = new QLineEdit(parent);
    m_LblBid = new QLabel(parent);
    m_LineEditBid = new QLineEdit(parent);
    m_LblVwap = new QLabel(parent);
    m_LineEditVwap = new QLineEdit(parent);
    m_LblVolume = new QLabel(parent);
    m_LineEditVolume = new QLineEdit(parent);
    m_LblLow = new QLabel(parent);
    m_LineEditLow = new QLineEdit(parent);
    m_LblAsk = new QLabel(parent);
    m_LineEditAsk = new QLineEdit(parent);
    m_LblOpen = new QLabel(parent);
    m_LineEditOpen = new QLineEdit(parent);

    m_LblTimeRefresh = new QLabel(parent);
    m_LineEditTimeRefresh = new QLineEdit(parent);
    connect(m_LineEditTimeRefresh, SIGNAL(editingFinished()), this, SLOT(on_m_LineEditTimeRefresh_editingFinished()));

    ui->setupUi(this);

    QString strTimeRefresh;
    strTimeRefresh = ui->m_LineEditTimeRefresh->text();
    m_nSecRefresh = strTimeRefresh.toInt();

    m_networkManager = new QNetworkAccessManager(this);
    connect(m_networkManager, SIGNAL(finished(QNetworkReply *)),
                                this, SLOT(on_m_networkManager_finished(QNetworkReply *)));

    QString url = "https://www.bitstamp.net/api/v2/ticker/btceur/";
    m_networkManager->get(QNetworkRequest(QUrl(url)));

    // connect the timer's timeout to our TimerHandlerFunction
    m_TmRefresh = new QTimer(this);
    m_TmRefresh->setSingleShot(true);
    connect(m_TmRefresh, SIGNAL(timeout()), this, SLOT(on_m_TmRefresh_timeout()));
    m_TmRefresh->start(m_nSecRefresh*1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_m_TmRefresh_timeout()
{
    qDebug() << "on_m_TmRefresh_timeout";

    QString url = "https://www.bitstamp.net/api/v2/ticker/btceur/";
    m_networkManager->get(QNetworkRequest(QUrl(url)));

    QString strTimeRefresh;
    strTimeRefresh = ui->m_LineEditTimeRefresh->text();
    m_nSecRefresh = strTimeRefresh.toInt();

    m_TmRefresh->start(m_nSecRefresh*1000);
}

void MainWindow::on_m_LineEditTimeRefresh_editingFinished()
{
    qDebug() << "on_m_LineEditTimeRefresh_editingFinished";

    QString strTimeRefresh;
    strTimeRefresh = ui->m_LineEditTimeRefresh->text();
    m_nSecRefresh = strTimeRefresh.toInt();

    m_TmRefresh->stop();
    m_TmRefresh->start(m_nSecRefresh*1000);
}

void MainWindow::on_m_networkManager_finished(QNetworkReply *reply)
{
    //parse json
    qDebug() << "on_m_networkManager_finished";

    QString strReply = (QString)reply->readAll();

    qDebug() << "Data : " << strReply;

    if(!strReply.isEmpty()) {
        QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8());

        QJsonObject jsonObj = jsonResponse.object();

        qDebug() << "high:" << jsonObj["high"].toString();
        qDebug() << "last:" << jsonObj["last"].toString();
        qDebug() << "timestamp:" << jsonObj["timestamp"].toString();
        qDebug() << "bid:" << jsonObj["bid"].toString();
        qDebug() << "vwap:" << jsonObj["vwap"].toString();
        qDebug() << "volume:" << jsonObj["volume"].toString();
        qDebug() << "low:" << jsonObj["low"].toString();
        qDebug() << "ask:" << jsonObj["ask"].toString();
        qDebug() << "open:" << jsonObj["open"].toString();

        ui->m_LineEditHigh->setText(jsonObj["high"].toString());
        ui->m_LineEditLast->setText(jsonObj["last"].toString());
        ui->m_LineEditTimeStamp->setText(jsonObj["timestamp"].toString());
        ui->m_LineEditBid->setText(jsonObj["bid"].toString());
        ui->m_LineEditVwap->setText(jsonObj["vwap"].toString());
        ui->m_LineEditVolume->setText(jsonObj["volume"].toString());
        ui->m_LineEditLow->setText(jsonObj["low"].toString());
        ui->m_LineEditAsk->setText(jsonObj["ask"].toString());
        ui->m_LineEditOpen->setText(jsonObj["open"].toString());
    }
}
