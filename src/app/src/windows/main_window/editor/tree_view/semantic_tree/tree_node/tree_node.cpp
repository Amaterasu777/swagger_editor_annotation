#include "tree_node.h"

using namespace windows::ui_mainwindow::editor_widgets;

//
//  Конструктор и деструктор класса
//

TreeNode::TreeNode(const QVector<QVariant> &data, TreeNode* parentItem)
    : _itemData(data), _parentItem(parentItem)
{
}

TreeNode::~TreeNode() {
    //  При удалении - очищаем память
    clear();
}

//
//  Методы класса
//

//  Метод очистки дерева
void TreeNode::clear() {
    qDeleteAll(_childItems);
}

//  Метод добавления потомка
void TreeNode::appendChild(TreeNode* item) {
    _childItems.append(item);
}

//  Метод поиска потомка
TreeNode* TreeNode::child(int row) {
    if (row < 0 || row >= _childItems.size()) // Если не нашли
        return nullptr;
    return _childItems.at(row);
}

//  Метод, возвращающий кол-во потомков
int TreeNode::childCount() const {
    return _childItems.count();
}

//  Метод, возвращающий кол-во колонок
int TreeNode::columnCount() const {
    return _itemData.count();
}

//  Метод, возвращающий данные узла
QVariant TreeNode::data(int column) const {
    if (column < 0 || column >= _itemData.size())
        return QVariant();
    return _itemData.at(column);
}

//  Метод, возвращающий родительский узел
TreeNode* TreeNode::parentItem() {
    return _parentItem;
}

//  Метод, возвращающий линию в дереве
int TreeNode::row() const {
    if (_parentItem)
        return _parentItem->_childItems.indexOf(const_cast<TreeNode*>(this));
    return 0;
}