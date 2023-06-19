#include "widget.h"
#include "./ui_widget.h"
#include "personmodel.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    PersonModel *model = new PersonModel(this);

    ui->listView->setModel(model);
    ui->treeView->setModel(model);
    ui->tableView->setModel(model);

    connect(ui->addButton, &QPushButton::clicked, this, [=](){
        AddPersonDialog dialog(this);
        int exec = dialog.exec();

        if (exec == QDialog::Accepted) {
            model->addPerson(dialog.getPerson());
        }
    });

    connect(ui->removeButton, &QPushButton::clicked, this, [=](){
        if (ui->listView->hasFocus()) model->removePerson(ui->listView->currentIndex());
        else if (ui->tableView->hasFocus()) model->removePerson(ui->tableView->currentIndex());
        else if (ui->treeView->hasFocus()) model->removePerson(ui->treeView->currentIndex());
    });
}

Widget::~Widget()
{
    delete ui;
}

