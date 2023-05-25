#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_netManager = new QNetworkAccessManager(this);
    m_dataBuffer = new QByteArray();
    QNetworkRequest request;
    request.setUrl(QUrl("https://www.github.com"));

    m_netReply = m_netManager->get(request);

    connect(m_netReply, &QIODevice::readyRead, this, &Widget::dataReadyRead);
    connect(m_netReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);

    connect(ui->getDataButton, &QPushButton::clicked, this, &Widget::getDataButtonClicked);
}

void Widget::dataReadyRead() {
    qDebug() << "Data available";
    m_dataBuffer->append(m_netReply->readAll());
}

void Widget::dataReadFinished() {
    if (m_netReply->error()) {
        qDebug() << "Error: " << QString(*m_dataBuffer);
    } else {
        ui->textEdit->setPlainText(QString(*m_dataBuffer));
    }
}

void Widget::getDataButtonClicked() {
    qDebug() << "REQUEST";
    QNetworkRequest *request = new QNetworkRequest();
    qDebug() << ui->lineEdit->text();
    request->setUrl(QUrl(ui->lineEdit->text()));

    m_netReply = m_netManager->get(*request);
}

Widget::~Widget()
{
    delete m_dataBuffer;
    delete ui;
}

