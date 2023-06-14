/*#ifndef INDICATOR_H
#define INDICATOR_H

#include <QMainWindow>

class Indicator : public QMainWindow
{
    Q_OBJECT
public:
    explicit Indicator(QWidget *parent = nullptr);

signals:
    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event) override;

    // QWidget interface
public:
    QSize sizeHint() const override;
};

#endif // INDICATOR_H
*/
#ifndef INDICATOR_H
#define INDICATOR_H

#include <QWidget>
#include <QTimer>

class Indicator : public QWidget
{
    Q_OBJECT
public:
    explicit Indicator(QWidget *parent = nullptr);

signals:

public slots:
    void activateNormal();
    void activateWarning();
    void activateDanger();

private slots:
    void toggleLights();

    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event) override;

    // QWidget interface
public:
    QSize sizeHint() const override;

private:
    bool m_greenActive;
    bool m_redActive;
    bool m_yellowActive;

    bool m_lightsOn;

    QTimer *m_timer;
};

#endif // INDICATOR_H
