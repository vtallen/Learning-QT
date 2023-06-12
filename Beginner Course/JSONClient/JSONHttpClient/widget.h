#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QIODevice>
#include <QNetworkReply>

#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void fetchButtonClicked();
public slots:
    void dataReadReady();
    void dataReadFinished();

private:
    Ui::Widget *ui;
    QNetworkAccessManager *m_netManager{};
    QNetworkReply *m_netReply{};
    QByteArray *m_dataBuffer{};
};
#endif // WIDGET_H
