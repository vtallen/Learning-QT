#include "widget.h"
#include "./ui_widget.h"

#include <QDebug>
#include <QMouseEvent>
#include <QMenu>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "Mouse Pressed: " << event->pos();
    ui->label->setText("Mouse Pressed: " + QString::number(event->pos().x()) + "," + QString::number(event->pos().y()));
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << "Mouse Released: " << event->pos();
    ui->label->setText("Mouse Released: " + QString::number(event->pos().x()) + "," + QString::number(event->pos().y()));
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << "Mouse moved: " << event->pos();
    ui->label->setText("Mouse Moved: " + QString::number(event->pos().x()) + "," + QString::number(event->pos().y()));
}

void Widget::closeEvent(QCloseEvent *event) {
    qDebug() << "Widget about to close";
}

void Widget::contextMenuEvent(QContextMenuEvent *event)
{
    qDebug() << "Context Menu Event: " << event->pos();
    qDebug() << "Triggered for: " << event->reason();
    QMenu *menu = new QMenu(this);
    menu->addAction("Action1");
    menu->addAction("Action2");

    menu->popup(mapToGlobal(event->pos()));
}


void Widget::enterEvent(QEnterEvent *event)
{
    qDebug() << "Enter Event: " << event->position();
    ui->label->setText("Enter Event: " + QString::number(event->x()) + "," + QString::number(event->y()));
}

void Widget::leaveEvent(QEvent *event)
{
    qDebug() << "Leave Event: ";
    ui->label->setText("Leave Event");
}
