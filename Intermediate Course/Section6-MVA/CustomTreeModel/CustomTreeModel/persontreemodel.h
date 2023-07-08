#ifndef PERSONTREEMODEL_H
#define PERSONTREEMODEL_H

#include <QObject>
#include <QAbstractItemModel>
#include <QString>
#include <QFile>
#include <QIODevice>
#include <QStringList>
#include <QTextStream>

#include "person.h"

class PersonTreeModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit PersonTreeModel(QObject *parent = nullptr);
    ~PersonTreeModel() override;

    // QAbstractItemModel interface
    QModelIndex index(int row, int column, const QModelIndex &parent) const override;
    QModelIndex parent(const QModelIndex &child) const override;
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    Qt::ItemFlags flags(const QModelIndex &index) const override;

private:
    void readFile();
    QStringList getNameAndProfession(QString string);

    Person *mRootPerson;

public:
};

#endif // PERSONTREEMODEL_H
