#include "person.h"

Person::Person(QString name, QString profession, Person *parent) : mName{name}, mProfession{profession}, mParent{parent} {

}

Person::~Person()
{
    qDeleteAll(mChildren);
}

void Person::appendChild(Person *child){
    mChildren.append(child);
}

Person *Person::child(int row)
{
    return mChildren.value(row);
}

int Person::childCount() const
{
    return mChildren.count();
}

QVariant Person::data(int column) const
{
    if (column == 0) return mName;
    if (column == 1) return mProfession;

    return QVariant();
}

int Person::row() const
{
    if (mParent) {
        mParent->mChildren.indexOf(const_cast<Person*>(this));
    }
    return 0;
}

Person *Person::parentPerson()
{
    return mParent;
}

void Person::showInfo()
{
    qDebug() << "Person : " << mName << " " << mProfession << "(" << childCount() << " children)";
    for (Person *child : mChildren) {
        child->showInfo();
    }
}
