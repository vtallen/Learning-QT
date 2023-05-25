#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , m_netManager(new QNetworkAccessManager(this))
    , m_dataBuffer(new QByteArray)
{
    ui->setupUi(this);

    connect(ui->fetchButton, &QPushButton::clicked, this, &Widget::fetchButtonClicked);
}

void Widget::fetchButtonClicked() {
    const QUrl API_ENDPOINT("https://jsonplaceholder.typicode.com/posts");
    QNetworkRequest request;
    request.setUrl(API_ENDPOINT);

    m_netReply = m_netManager->get(request);
    connect(m_netReply, &QIODevice::readyRead, this, &Widget::dataReadReady);
    connect(m_netReply, &QNetworkReply::finished, this, &Widget::dataReadFinished);

}

void Widget::dataReadReady() {
    m_dataBuffer->append(m_netReply->readAll());
}

void Widget::dataReadFinished() {
    if (m_netReply->error()) {
        qDebug() << "Error: " << m_netReply->errorString();
    } else {
        QJsonDocument doc = QJsonDocument::fromJson(*m_dataBuffer);
        QJsonArray array = doc.array();

        for (int i = 0; i < array.size(); ++i) {
            QJsonObject object = array.at(i).toObject();
            QVariantMap map = object.toVariantMap();
            QString title = map["title"].toString();
            ui->listWidget->addItem("[" + QString::number(i + 1) + "] " + title);
        }
    }
}
Widget::~Widget()
{
    delete m_dataBuffer;
    delete ui;
}

