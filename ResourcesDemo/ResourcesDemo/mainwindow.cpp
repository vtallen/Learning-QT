#include "mainwindow.h"
#include "./ui_mainwindow.h"

<<<<<<< HEAD
#include <QPixmap>

=======
>>>>>>> 3bd6b4d (Finished the QPalette and StyleSheet lectures. Created 2 applications to experiment with setting styles on both components and the application as a whole)
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD

    QPixmap pix{":/images/minions.png"};
    ui->label->setPixmap(pix.scaled(300, 300));
=======
>>>>>>> 3bd6b4d (Finished the QPalette and StyleSheet lectures. Created 2 applications to experiment with setting styles on both components and the application as a whole)
}

MainWindow::~MainWindow()
{
    delete ui;
}

