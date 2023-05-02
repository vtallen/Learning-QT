#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void buttonOneClicked();
    void buttonTwoClicked();

private slots:
    void on_buttonOne_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
