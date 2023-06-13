#include "datetimewidget.h"

DateTimeWidget::DateTimeWidget(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QFont font("Consolas", 20, QFont::Bold);
    QSizePolicy policy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    dateString = QDate::currentDate().toString(Qt::TextDate);
    labelTop = new QLabel(this);
    labelTop->setText(dateString);
    labelTop->setFont(font);
    labelTop->setAlignment(Qt::AlignHCenter);

    timeString = QTime::currentTime().toString();
    labelBottom = new QLabel(this);
    labelBottom->setText(timeString);
    labelBottom->setFont(font);
    labelBottom->setAlignment(Qt::AlignHCenter);
    labelBottom->setSizePolicy(policy);
    QString css = QString("background-color : #00eff9; color : #fffff1");
    labelBottom->setStyleSheet(css);

    layout->addWidget(labelTop);
    layout->addWidget(labelBottom);
    setLayout(layout);
    setSizePolicy(policy);

    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, &QTimer::timeout, this, &DateTimeWidget::updateTime);
    timer->start();
}

void DateTimeWidget::updateTime() {
    timeString = QTime::currentTime().toString();
    labelBottom->setText(timeString);

    if (dateString != QDate::currentDate().toString(Qt::TextDate)) {
        dateString = QDate::currentDate().toString(Qt::TextDate);
        labelTop->setText(dateString);
    }
}
