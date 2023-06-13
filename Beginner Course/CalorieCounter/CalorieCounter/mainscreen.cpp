#include "mainscreen.h"
#include "./ui_mainscreen.h"

MainScreen::MainScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainScreen)
{
    ui->setupUi(this);

    m_person.setWeight(ui->weightSpinBox->value());
    m_time = ui->timeSpinBox->value();
    m_speed = ui->speedSpinBox->value();

    connect(ui->weightSpinBox, SIGNAL(valueChanged(double)), this, SLOT(weightChanged(double)));
    connect(ui->timeSpinBox, SIGNAL(valueChanged(double)), this, SLOT(timeChanged(double)));
    connect(ui->speedSpinBox, SIGNAL(valueChanged(double)), this, SLOT(speedChanged(double)));

    connect(this, &MainScreen::calorieCountChanged, [=](){
        ui->calorieCountLabel->setText(QString::number(m_calorieCount));
    });

    calculateCalories();
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::calculateCalories() {
    m_calorieCount = ((0.0215 * (m_speed * m_speed * m_speed)) - (0.1765 * (m_speed * m_speed))
                      + ((0.8710 * m_speed) + 1.4577) + m_person.weight() * m_time);

    emit calorieCountChanged();
}

void MainScreen::weightChanged(double weight) {
    m_person.setWeight(weight);
    calculateCalories();
}

void MainScreen::timeChanged(double time) {
    m_time = time;
    calculateCalories();
}

void MainScreen::speedChanged(double speed) {
    m_speed = speed;
    calculateCalories();
}

void MainScreen::updateCalorieCount() {

}
