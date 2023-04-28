#ifndef ROCKWIDGET_H
#define ROCKWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPalette>
#include <QPushButton>

#include <memory.h>

class RockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RockWidget(QWidget *parent = nullptr);

private slots:
    void buttonClicked();

private:
    QLabel *m_label{};

    QPalette m_label1Palette{};
    QFont m_label1Font{};
    QLabel *m_label1{};

    QPalette m_label2Palette{};
    QFont m_serifFont{};
    QLabel *m_label2{};

    QFont m_buttonFont{};
    QPushButton *m_button{};

    QSize sizeHint() const override;

};

#endif // ROCKWIDGET_H
