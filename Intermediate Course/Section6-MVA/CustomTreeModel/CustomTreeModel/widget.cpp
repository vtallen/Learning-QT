#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget) 
{
    ui->setupUi(this);
    PersonTreeModel *model = new PersonTreeModel(this);

    ui->treeView->setModel(model);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::readFileClicked()
{
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

void Widget::showInfoClicked()
{
    mRootPerson->showInfo();
}

QStringList Widget::getNameAndProfession(QString string) {
    QString cleanedUpStr = string.trimmed();

    QStringList split = cleanedUpStr.split("(");
    split[1].chop(1);

    return split;
}


