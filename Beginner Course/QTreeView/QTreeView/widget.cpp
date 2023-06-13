#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->readDataButton, &QPushButton::clicked, this, &Widget::readDataButtonClicked);
    // QFileSystemModel
    QString path{QDir::homePath()};

    m_dirModel = new QFileSystemModel(this);
    m_dirModel->setFilter(QDir::NoDotAndDotDot | QDir::Dirs | QDir::Files);
    m_dirModel->setRootPath(path);

    ui->treeView->setModel(m_dirModel);
    ui->listView->setModel(m_dirModel);

    ui->treeView->setRootIndex(m_dirModel->index("/"));
    /*
    m_standardItemModel = new QStandardItemModel(this);
    QStandardItem *parentItem{m_standardItemModel->invisibleRootItem()};

    for (int i{0}; i < 4; ++i) {
        QStandardItem *item{new QStandardItem(QString("item %0").arg(i))};
        parentItem->appendRow(item);
        parentItem = item;
    }

    ui->treeView->setModel(m_standardItemModel);
    ui->listView->setModel(m_standardItemModel);
    */
}

Widget::~Widget()
{
    delete ui;
}

void Widget::readDataButtonClicked() {
/*    qDebug() << "Row count: " << m_dirModel->rowCount(QModelIndex());
    qDebug() << "Column count: " << m_dirModel->columnCount(QModelIndex());
    auto index{m_dirModel->index(0, 0, QModelIndex())};
    auto data{index.data()};
    qDebug() << data.toString();

    auto index2{m_dirModel->index(0, 0, index)};
    qDebug() << m_dirModel->index(QDir::currentPath());
    qDebug() << index2.row();

    qDebug() << index2.data().toString();
*/
    QString folderPath = "/Library";
    QModelIndex rootIndex = m_dirModel->index(0, 0);
    QModelIndex folderIndex = m_dirModel->index(2, 0, rootIndex);

    if (folderIndex.isValid() && folderIndex.parent() == rootIndex) {
        int folderRow = folderIndex.row();
        // 'folderRow' will give you the index of the folder within the model

        // Example: Print the folder name and its index
        QString folderName = m_dirModel->fileName(folderIndex);
        qDebug() << "Folder name:" << folderName;
        qDebug() << "Folder index:" << folderRow;
    } else {
        qDebug() << "Folder not found or invalid.";
    }

}
