#include "widget.h"
#include <QFileDialog>
#include <QMessageBox>
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->chooseDirButton, &QPushButton::clicked, this, &Widget::chooseDirButtonClicked);
    connect(ui->createDirButton, &QPushButton::clicked, this, &Widget::createDirButtonClicked);
    connect(ui->dirExistsButton, &QPushButton::clicked, this, &Widget::dirExistsButtonClicked);
    connect(ui->dirOrFileButton, &QPushButton::clicked, this, &Widget::dirOrFileButtonClicked);
    connect(ui->folderContentsButton,
            &QPushButton::clicked,
            this,
            &Widget::folderContentsButtonClicked);
}
Widget::~Widget()
{
    delete ui;
}

void Widget::chooseDirButtonClicked()
{
    QString filename{QFileDialog::getExistingDirectory(this, "Choose folder")};
    if (filename.isEmpty()) {
        return;
    }
    ui->dirLineEdit->setText(filename);

    folderContentsButtonClicked();
}

void Widget::createDirButtonClicked()
{
    QString dirPath{ui->dirLineEdit->text()};

    if (dirPath.isEmpty())
        return;

    QDir dir{dirPath};
    if (!dir.exists()) {
        if (dir.mkpath(dirPath)) {
            QMessageBox::information(this, "Message", "Directory Created");
        } else {
            QMessageBox::information(this, "Message", "Directory already exists");
        }
    }
}

void Widget::dirExistsButtonClicked()
{
    QString dirPath{ui->dirLineEdit->text()};
    if (dirPath.isEmpty())
        return;

    QDir dir{dirPath};
    if (dir.exists()) {
        QMessageBox::information(this, "Message", "Directory exists");
    } else {
        QMessageBox::information(this, "Message", "Directory does not exist");
    }
}

void Widget::dirOrFileButtonClicked()
{
    QFileInfo fileInfo{ui->fileList->currentItem()->text()};
    if (fileInfo.isDir())
        QMessageBox::information(this, "Message", "This is a dir");
    else if (fileInfo.isFile())
        QMessageBox::information(this, "Message", "This is a file");
    else
        QMessageBox::information(this, "Message", "Not really sure what that is");
}

void Widget::folderContentsButtonClicked()
{
    ui->fileList->clear();

    QString dirPath{ui->dirLineEdit->text()};
    if (dirPath.isEmpty())
        return;

    QDir dir{dirPath};
    QList<QFileInfo> fileList{dir.entryInfoList()};

    for (int i{0}; i < fileList.size(); ++i) {
        ui->fileList->addItem(fileList.at(i).absoluteFilePath());
    }
}
