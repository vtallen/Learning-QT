#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>
#include <QApplication>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionQuit_triggered()
{
    QTimer::singleShot(2000, this, &MainWindow::quit);
    ui->statusbar->showMessage("App will be killed in 2 seconds");
}

void MainWindow::quit() {
    QApplication::quit();
}

void MainWindow::on_actionAbout_triggered()
{

}


void MainWindow::on_actionAbout_QT_triggered()
{
    QApplication::aboutQt();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

