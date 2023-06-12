#include "widget.h"
#include "./ui_widget.h"

#include <QMouseEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    button1 = new Button(this);
    button1->setText("Button 1");

    connect(ui->button2, &QPushButton::clicked, this, &Widget::button2clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::button2clicked() {
    QMouseEvent *mouseEvent = new QMouseEvent(QEvent::MouseButtonPress, QPointF(10, 10), Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);

    if (QApplication::sendEvent(button1, mouseEvent)) {
        qDebug() << "Event accepted";
    } else {
        qDebug() << "Event not acceptend";
    }
}

