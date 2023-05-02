#include "widget.h"
#include "./ui_widget.h"

#include <QFileDialog>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->chooseFileButton, &QPushButton::clicked, this, &Widget::chooseFileButtonPressed);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::chooseFileButtonPressed() {
    // Get directory
    //    QString dir{QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks)};

//    qDebug() << "The chosen dir was " << dir;

    // Get open file name

//    QString fileName{QFileDialog::getOpenFileName(this, tr("Open file"), "/home", tr("Images (*.png *.xpm *.jpg)"))};

//    qDebug() << "Filename was " << fileName;

    // Open multiple files
//    QStringList files{QFileDialog::getOpenFileNames(this, "Select on or more files to open", QString(), "Images (*png *.xmp *.jpg);;TextFiles (*.txt *.xml)")};

//    for (auto file : files) {
//        qDebug() << file;
//    }

    // Get save file name
    QString fileName{QFileDialog::getSaveFileName(this, "Save file", "/home", "Images (*.png *.xmp *.jpg)")};

    qDebug() << "Chosen file " << fileName;
}

