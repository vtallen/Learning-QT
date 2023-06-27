#ifndef STAREDITOR_H
#define STAREDITOR_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>

class StarEditor : public QWidget
{
    Q_OBJECT
public:
    explicit StarEditor(QWidget *parent = nullptr);
    QSize sizeHint() const override;

    void setStarRating(int rating = 5);
    int getStarRating();
protected:
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
private:
    int m_starRating;
    QPolygon poly;

signals:
    void editingFinished();
};

#endif // STAREDITOR_H
