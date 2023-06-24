#include "persondelegate.h"
#include "personmodel.h"

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
