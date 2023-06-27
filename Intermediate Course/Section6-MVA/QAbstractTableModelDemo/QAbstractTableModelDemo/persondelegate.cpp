#include "persondelegate.h"
#include "personmodel.h"
#include <QPainter>
PersonDelegate::PersonDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{

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
    } else {
        return QStyledItemDelegate::setEditorData(editor, index);
    }
}

void PersonDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (index.column() == 2) {
        QComboBox *combo = static_cast<QComboBox*>(editor);
        model->setData(index, combo->currentText(), PersonModel::FavoriteColorRole);


    } else {
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

    } else {
        QStyledItemDelegate::paint(painter, option, index);
    }
}
