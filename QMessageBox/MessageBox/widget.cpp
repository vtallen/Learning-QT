#include "widget.h"

#include <QPushButton>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button{new QPushButton(this)};
    button->setText("Click me");
    button->move(200, 200);

    connect(button, &QPushButton::clicked, [this, button]() {
        int ret{QMessageBox::warning(this, "Hello", "We're trying to reach you about your car's extended warranty", QMessageBox::Ok | QMessageBox::Cancel)};
        switch(ret) {
            case QMessageBox::Cancel:
                button->setText(":(");
                break;
            case QMessageBox::Ok:
                button->setText(":)");
                break;
        }
    });
}

Widget::~Widget()
{
}

