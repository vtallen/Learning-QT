#ifndef WATERTANK_H
#define WATERTANK_H

#include <QWidget>
#include <QPen>
#include <QBrush>
#include <QPainter>

class WaterTank : public QWidget
{
    Q_OBJECT
public:
    explicit WaterTank(QWidget *parent = nullptr);
    QSize sizeHint() const override;

    int getPercentFull();
    void fillTank(double percent);
    void resetTank();
signals:
    void normalLevel();
    void warningLevel();
    void dangerLevel();

protected:
    void paintEvent(QPaintEvent *event) override;
private:
    int m_percentFull{};
};

#endif // WATERTANK_H
