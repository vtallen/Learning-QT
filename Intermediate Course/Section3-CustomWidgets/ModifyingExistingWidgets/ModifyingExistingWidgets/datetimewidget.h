#ifndef DATETIMEWIDGET_H
#define DATETIMEWIDGET_H

#include <QWidget>
#include <QDate>
#include <QLabel>
#include <QTimer>
#include <QVBoxLayout>

class DateTimeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DateTimeWidget(QWidget *parent = nullptr);

signals:

private slots:
    void updateTime();

private:
    QTimer *timer;
    QLabel *labelTop;
    QLabel *labelBottom;
    QString dateString;
    QString timeString;
};

#endif // DATETIMEWIDGET_H
