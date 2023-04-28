#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> stringList;

    stringList << "never" << "gonna" << "give" << "you" << "up";
    stringList.append("never");
    stringList.append("gonna");
    stringList.append("let");
    stringList.append("you");
    stringList.append("down");

    qDebug() << stringList[0];

    for (auto item : stringList) {
        qDebug() << item;
    }

    return a.exec();
}
