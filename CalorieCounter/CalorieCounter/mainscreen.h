#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QWidget>

#include "person.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainScreen; }
QT_END_NAMESPACE

class MainScreen : public QWidget
{
    Q_OBJECT

public:
    MainScreen(QWidget *parent = nullptr);
    ~MainScreen();

private slots:
    void calculateCalories();
    void weightChanged(double weight);
    void timeChanged(double time);
    void speedChanged(double speed);
    void updateCalorieCount();

signals:
    void calorieCountChanged();

private:
    Ui::MainScreen *ui;

    Person m_person{};
    double m_time{};
    double m_speed{};
    double m_calorieCount{};
};
#endif // MAINSCREEN_H
