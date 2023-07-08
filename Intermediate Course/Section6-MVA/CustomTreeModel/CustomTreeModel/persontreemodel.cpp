#include "persontreemodel.h"

PersonTreeModel::PersonTreeModel(QObject *parent)
    : QAbstractItemModel{parent}
{
    mRootPerson = new Person("Name", "Profession", nullptr);
    readFile();
}

PersonTreeModel::~PersonTreeModel() {
    delete mRootPerson;
}



/*
 * Functions to read data in
 */
QStringList PersonTreeModel::getNameAndProfession(QString string) {
    QString cleanedUpStr = string.trimmed();

    QStringList split = cleanedUpStr.split("(");
    split[1].chop(1);

    return split;
}

void PersonTreeModel::readFile() {
    QString fileName = ":/data/familytree.txt";
    QFile inputFile(fileName);

    if (inputFile.open(QIODevice::ReadOnly)) {
        int lastIndentation = 0;
        Person *lastParent = mRootPerson;

        Person *lastPerson = nullptr;

        QTextStream in(&inputFile);

        while (!in.atEnd()) {
            QString line = in.readLine();

            int currentIndentation = line.count('\t');

            QStringList infoList = getNameAndProfession(line);

            int diffIndent = currentIndentation - lastIndentation;

            if (diffIndent == 0) {
               // First level person
                Person *person = new Person(infoList[0], infoList[1], lastParent);
                lastParent->appendChild(person);
                lastPerson = person;

            } else if (diffIndent > 0) {
               // Move the parent down
                lastParent = lastPerson;
                Person *person = new Person(infoList[0], infoList[1], lastParent);
                lastParent->appendChild(person);
                lastPerson = person;

            } else {
                // Move up the parent chain looking for the correct parent
                int iterations = -diffIndent;
                for (int i = 0; i < iterations; ++i) {
                    lastParent = lastParent->parentPerson();
                }

                Person *person = new Person(infoList[0], infoList[1], lastParent);
                lastParent->appendChild(person);
                lastPerson = person;
            }

            lastIndentation = currentIndentation;
        }

    } else {
        qDebug() << "Failed to open familytree.txt";
    }
}

/*
 * QAbstractItemModel interface
 */


QModelIndex PersonTreeModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!hasIndex(row, column, parent)) {
        return QModelIndex{};
    }

    Person *parentPerson;
    if (!parent.isValid()) {
        parentPerson = mRootPerson;
    } else {
        parentPerson = static_cast<Person*>(parent.internalPointer());
    }

    Person *childPerson = parentPerson->child(row);

    if (childPerson) {
        return createIndex(row, column, childPerson);
    }

    return QModelIndex();
}

QModelIndex PersonTreeModel::parent(const QModelIndex &child) const
{
    if (!child.isValid()) return QModelIndex();

    Person *childPerson = static_cast<Person*>(child.internalPointer());
    Person *parentPerson = childPerson->parentPerson();

    if (parentPerson == mRootPerson) return QModelIndex{};
    return createIndex(parentPerson->row(), 0, parentPerson);
}

int PersonTreeModel::rowCount(const QModelIndex &parent) const
{
    Person *parentPerson;

    if (parent.column() > 0) return 0;

    if (!parent.isValid()) parentPerson = mRootPerson;

    else parentPerson = static_cast<Person*>(parent.internalPointer());

    return parentPerson->childCount();
}

int PersonTreeModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant PersonTreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) return QVariant();

    if (role != Qt::DisplayRole) return QVariant();

    Person *person = static_cast<Person*>(index.internalPointer());

    return person->data(index.column());
}

QVariant PersonTreeModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal && (role == Qt::DisplayRole)) {
        return mRootPerson->data(section);
    }

    return QVariant();
}

Qt::ItemFlags PersonTreeModel::flags(const QModelIndex &index) const
{
    if (index.isValid()) return QAbstractItemModel::flags(index);
}
