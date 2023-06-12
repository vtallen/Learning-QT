#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileSystemModel>
#include <QStandardItemModel>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void readDataButtonClicked();
private:
    Ui::Widget *ui;
    QFileSystemModel *m_dirModel;
    QStandardItemModel *m_standardItemModel;
};
#endif // WIDGET_H
