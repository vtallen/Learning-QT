#ifndef DOUBLECLICKBUTTON_H
#define DOUBLECLICKBUTTON_H

#include <QObject>
#include <QPushButton>

class DoubleClickButton : public QPushButton
{
    Q_OBJECT
public:
    explicit DoubleClickButton(QWidget *parent = nullptr);
signals:
    void doubleClicked();
    // QWidget interface
protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;
};

#endif // DOUBLECLICKBUTTON_H
