#include "widget.h"
#include "./ui_widget.h"

#include "suredialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->submitButton, &QPushButton::clicked, this, &Widget::submitButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::submitButtonClicked() {
    SureDialog *dialog{new SureDialog{this}};

    int returnCode{dialog->exec()};


}

