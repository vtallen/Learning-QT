#include "mainwindow.h"

#include <QDebug>
#include <QApplication>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

#include <memory.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_button = new QPushButton{"Hello", this};
    setCentralWidget(m_button);

    connect(m_button, &QPushButton::clicked, this, &MainWindow::btnClicked);

    m_quitAction = std::make_unique<QAction>("Quit");

    connect(m_quitAction.get(), &QAction::triggered, [=](){
        QApplication::quit();
    });

    m_fileMenu = menuBar()->addMenu("File");
    m_fileMenu->addAction(m_quitAction.get());
    menuBar()->addMenu("Edit");
    menuBar()->addMenu("Window");
    menuBar()->addMenu("Settings");
    menuBar()->addMenu("Help");

    statusBar()->showMessage("CLICKED", 3000);

}

MainWindow::~MainWindow()
{
}



QSize MainWindow::sizeHint() const
{
    return QSize{800, 500};
}

void MainWindow::btnClicked() {
    qDebug() << "CLICKED";

}
