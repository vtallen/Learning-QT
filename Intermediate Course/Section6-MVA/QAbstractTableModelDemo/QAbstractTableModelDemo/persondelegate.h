#ifndef PERSONDELEGATE_H
#define PERSONDELEGATE_H

#include <QObject>
#include <QItemDelegate>
#include <QStyledItemDelegate>
#include <QComboBox>

class PersonDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit PersonDelegate(QObject *parent = nullptr);

    // QAbstractItemDelegate interface
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;

    // QAbstractItemDelegate interface
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const override;
};

#endif // PERSONDELEGATE_H
