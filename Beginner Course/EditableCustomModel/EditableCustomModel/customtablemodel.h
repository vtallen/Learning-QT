#ifndef CUSTOMTABLEMODEL_H
#define CUSTOMTABLEMODEL_H

#include <QAbstractItemModel>
#include <QMainWindow>
#include <QString>
#include <QVector>

class CustomTableModel : public QAbstractTableModel
{
public:
    explicit CustomTableModel(QObject *parent = nullptr);

    // QAbstractItem Interface
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role);
    Qt::ItemFlags flags(const QModelIndex &index) const;

private:
    QVector<QVector<QString>> table;

};

#endif // CUSTOMTABLEMODEL_H
