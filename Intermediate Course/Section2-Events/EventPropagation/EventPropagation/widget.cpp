#include "widget.h"
#include "./ui_widget.h"

#include "childlineedit.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ChildButton *button = new ChildButton(this);
    button->setText("Event button");
    ui->verticalLayout->addWidget(button);

    connect(button, &ChildButton::clicked, this, [](){
        qDebug() << "ButtonCLicked";
    });

    ChildLineEdit *lineEdit = new ChildLineEdit(this);
    ui->verticalLayout->addWidget(lineEdit);

}

Widget::~Widget()
{
    delete ui;
}

