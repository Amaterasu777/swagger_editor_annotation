#include "semantic_tree.h"

using namespace windows::ui_mainwindow::editor_widgets;

//
//  Конструктор и деструктор класса
//

SemanticTree::SemanticTree(QObject* parent) : QAbstractItemModel(parent) {
    _root = nullptr;

    _root = new TreeNode({tr("Requests")});
    setupModelData(QString::fromLatin1("SWG_GET\nSWG_POST\n    SWG_PROPERTY\n    SWG_PROPERTY\n    SWG_PROPERTY\nSWG_GET").split('\n'), _root);
}
SemanticTree::~SemanticTree() {
    //  Если в корне что-есть, то очистим это
    delete _root;
}

//
//  Методы класса
//

//  Метод, возвращающий данные по индексу
QVariant SemanticTree::data(const QModelIndex& index, int role) const {
    if (!index.isValid())
        return QVariant();

    if (role != Qt::DisplayRole)
        return QVariant();

    TreeNode* item = static_cast<TreeNode*>(index.internalPointer());

    return item->data(index.column());
}

//  Метод, возвращающий индекс узла по его строке и вложенности
QModelIndex SemanticTree::index(int row, int column, const QModelIndex& parent) const {
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    TreeNode* parentItem;

    if (!parent.isValid())
        parentItem = _root;
    else
        parentItem = static_cast<TreeNode*>(parent.internalPointer());

    TreeNode* childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    return QModelIndex();
}

//  Метод, возвращающий родителя указанного узла
QModelIndex SemanticTree::parent(const QModelIndex& index) const {
    if (!index.isValid())
        return QModelIndex();

    TreeNode* childItem = static_cast<TreeNode*>(index.internalPointer());
    TreeNode* parentItem = childItem->parentItem();

    if (parentItem == _root)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

//  Метод, подсчитывающий кол-во строк
int SemanticTree::rowCount(const QModelIndex& parent) const {
    TreeNode* parentItem;
    if (parent.column() > 0)
        return 0;

    if (!parent.isValid())
        parentItem = _root;
    else
        parentItem = static_cast<TreeNode*>(parent.internalPointer());

    return parentItem->childCount();
}

//  Метод, подсчитывающий кол-во колонок
int SemanticTree::columnCount(const QModelIndex& parent) const {
    if (parent.isValid())
        return static_cast<TreeNode*>(parent.internalPointer())->columnCount();
    return _root->columnCount();
}

//  Метод, инициализирующий семантическую модель
void SemanticTree::setupModelData(const QStringList &lines, TreeNode* parent)
{
    QVector<TreeNode*> parents;
    QVector<int> indentations;
    parents << parent;
    indentations << 0;

    int number = 0;

    while (number < lines.count()) {
        int position = 0;
        while (position < lines[number].length()) {
            if (lines[number].at(position) != ' ')
                break;
            position++;
        }

        const QString lineData = lines[number].mid(position).trimmed();

        if (!lineData.isEmpty()) {
            const QStringList columnStrings = lineData.split('\t', QString::SkipEmptyParts);
            QVector<QVariant> columnData;
            columnData.reserve(columnStrings.count());
            for (const QString &columnString : columnStrings)
                columnData << columnString;

            if (position > indentations.last()) {
                if (parents.last()->childCount() > 0) {
                    parents << parents.last()->child(parents.last()->childCount()-1);
                    indentations << position;
                }
            } else {
                while (position < indentations.last() && parents.count() > 0) {
                    parents.pop_back();
                    indentations.pop_back();
                }
            }

            parents.last()->appendChild(new TreeNode(columnData, parents.last()));
        }
        ++number;
    }
}