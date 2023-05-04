#ifndef WIDGET_H
#define WIDGET_H

#include <QAbstractButton>
#include <QColor>
#include <QList>
#include <QPushButton>
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

private slots:
    void onColorButtonClicked();
    void clearButtonClicked();

private:
    Ui::Widget *ui;
    QList<QColor> m_colorList;

    int getButtonColorIndex(QString buttonText);
    void saveColor(QString key, QColor color);
    QColor loadColor(QString key);
    void setLoadedColor(QPushButton *button);
};
#endif // WIDGET_H
