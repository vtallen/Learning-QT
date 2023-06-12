#include "widget.h"
#include "./ui_widget.h"
#include "infodialog.h"

#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->provideInfoButton, &QPushButton::clicked, this, &Widget::provideInfoButtonClicked);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::provideInfoButtonClicked()
{
        InfoDialog *dialog{new InfoDialog{this}};
    // Modal

//    auto ret {dialog->exec()};

//    if (ret == QDialog::Accepted) {
//        QString position{dialog->position()};
//        QString os{dialog->favoriteOS()};

//        qDebug() << "Dialog accepted, position is " << position << " and favorite os is " << os;
//        ui->label->setText("Your position is " + position + " and your favorit OS is " + os);
//    } else {
//        qDebug() << "Dialog rejected";
//        ui->label->setText("Dialog rejected :(");
//    }

// Non modal
        connect(dialog, &InfoDialog::accepted, this, [=](){
            QString position{dialog->position()};
            QString os{dialog->favoriteOS()};

            qDebug() << "Dialog accepted, position is " << position << " and favorite os is " << os;
            ui->label->setText("Your position is " + position + " and your favorit OS is " + os);
        });

        connect(dialog, &InfoDialog::rejected, this, [=](){
            qDebug() << "Dialog rejected";
            ui->label->setText("Dialog rejected :(");
        });

        dialog->show();
        dialog->raise();
        dialog->activateWindow();
}

