#include "persondelegate.h"
#include "personmodel.h"
#include <QPainter>
PersonDelegate::PersonDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{
    poly << QPoint(0, 85) << QPoint(75, 75) << QPoint(100, 10) << QPoint(125, 75) << QPoint(200, 85) << QPoint(150,125) << QPoint(160, 190) << QPoint(100, 150) << QPoint(40, 190) << QPoint(50, 125) << QPoint(0, 85);
}


QWidget *PersonDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.column() == 2) {
        QComboBox *editor = new QComboBox(parent);

        for (QString &color : QColor::colorNames()) {
            QPixmap pix(50, 50);
            pix.fill(QColor(color));
            editor->addItem(QIcon(pix), color);
        }

        return editor;
    } else if (index.column() == 3) {
        int starRating = index.data().toInt();

        StarEditor *editor = new StarEditor(parent);
        editor->setStarRating(starRating);

        connect(editor, &StarEditor::editingFinished, this, &PersonDelegate::commitAndCloseEditor);

        return editor;
    } else {
        return QStyledItemDelegate::createEditor(parent, option, index);
    }
}

void PersonDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (index.column() == 2) {
        QComboBox *combo = static_cast<QComboBox*>(editor);
        int idx = QColor::colorNames().indexOf(index.data(Qt::DisplayRole));
        combo->setCurrentIndex(idx);
    } else if (index.column() == 3) {
        int starRating = index.data().toInt();

        StarEditor *starEditor = qobject_cast<StarEditor*>(editor);
        starEditor->setStarRating(starRating);
    } else {
        return QStyledItemDelegate::setEditorData(editor, index);
    }
}

void PersonDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (index.column() == 2) {
        QComboBox *combo = static_cast<QComboBox*>(editor);
        model->setData(index, combo->currentText(), PersonModel::FavoriteColorRole);


    } else if (index.column() == 3) {

        StarEditor *starEditor = qobject_cast<StarEditor*>(editor);
        model->setData(index, QVariant::fromValue(starEditor->getStarRating()), Qt::EditRole);

    }else {
        QStyledItemDelegate::setModelData(editor, model, index);
    }
}

void PersonDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}


QSize PersonDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QStyledItemDelegate::sizeHint(option, index).expandedTo(QSize(64, option.fontMetrics.height() + 10));
}


void PersonDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.column() == 2) {
        if (option.state & QStyle::State_Selected) {
            painter->fillRect(option.rect, option.palette.highlight());
        }

        QString favColor = index.data(PersonModel::FavoriteColorRole).toString();

        painter->save();
        painter->setBrush(QBrush(QColor(favColor)));

        painter->drawRect(option.rect.adjusted(3, 3, -3, -3));

        // Text size
        QSize textSize = option.fontMetrics.size(Qt::TextSingleLine, favColor);

        painter->setBrush(QBrush(Qt::white));

        int wAdj = (option.rect.width() - textSize.width()) / 2;
        int hAdj = (option.rect.width() - textSize.height()) / 2;

        //painter->drawRect(option.rect.adjusted(wAdj, hAdj, -wAdj, -hAdj));

        painter->drawText(option.rect, favColor, Qt::AlignHCenter | Qt::AlignVCenter);

        painter->restore();

    } else if (index.column() == 3) {
        QRect rect = option.rect.adjusted(10, 10, -10, -10);

        int starNumber = index.data().toInt();
        painter->save();

        painter->setRenderHint(QPainter::Antialiasing, true);
        painter->setPen(Qt::NoPen);
        painter->setBrush(QBrush(Qt::white));

        painter->translate(rect.x(), rect.y());
        painter->scale(0.1, 0.1);

        for (int i{0}; i < starNumber; ++i) {
            painter->drawPolygon(poly);
            painter->translate(220, 0);
        }
        painter->restore();
    } else {
        QStyledItemDelegate::paint(painter, option, index);
    }

}

void PersonDelegate::commitAndCloseEditor() {
    StarEditor *editor = qobject_cast<StarEditor *>(sender());
    emit commitData(editor);
    emit closeEditor(editor);
}
