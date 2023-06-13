#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMenu>
#include <QMenuBar>

#include <memory.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // QWidget interface

private:
    QPushButton *m_button;
    std::unique_ptr<QAction> m_quitAction;
    QMenu *m_fileMenu;

    QSize sizeHint() const override;
    void btnClicked();


};
#endif // MAINWINDOW_H
