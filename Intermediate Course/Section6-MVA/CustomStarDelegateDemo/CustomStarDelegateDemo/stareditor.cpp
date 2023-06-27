#include "stareditor.h"

StarEditor::StarEditor(QWidget *parent)
    : QWidget{parent}
{
    setMouseTracking(true);

    poly << QPoint(0, 85) << QPoint(75, 75) << QPoint(100, 10) << QPoint(125, 75) << QPoint(200, 85) << QPoint(150,125) << QPoint(160, 190) << QPoint(100, 150) << QPoint(40, 190) << QPoint(50, 125) << QPoint(0, 85);
}


void StarEditor::mouseReleaseEvent(QMouseEvent *event)
{
    emit editingFinished();
}

void StarEditor::mouseMoveEvent(QMouseEvent *event)
{
    int rating = event->position().x() / 20;
    if ((rating != m_starRating) && (rating < 6)) {
        m_starRating = rating;
        update();
    }
}

void StarEditor::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(Qt::NoPen);

    painter.setBrush(QBrush(Qt::green));
    painter.drawRect(rect());

    painter.setBrush(QBrush(Qt::yellow));

    painter.translate(rect().x(), rect().y() + 10);
    painter.scale(0.1, 0.1);

    for (int i{}; i < m_starRating; ++i) {
        painter.drawPolygon(poly);
        painter.translate(220, 0);
    }
}

void StarEditor::setStarRating(int rating) {
    m_starRating = rating;
}

int StarEditor::getStarRating()
{
    return m_starRating;
}

QSize StarEditor::sizeHint() const
{
    return QSize(100, 50);
}
