#ifndef SWAGGEREDITOR_SEMANTIC_TREE_NODE_H
#define SWAGGEREDITOR_SEMANTIC_TREE_NODE_H

#include <QtCore/QVariant>
#include <QtCore/QVector>

namespace windows {
    namespace ui_mainwindow {
        namespace editor_widgets {
            /**
             * Узел семантического дерева
             */
            class TreeNode {
            public:
                explicit TreeNode(const QVector<QVariant> &data, TreeNode* parentItem = nullptr);
                ~TreeNode();

                /**
                 * Рекурсивная очистка детей
                 */
                void clear();

                /**
                 * Добавляет потомка к данному узлу
                 * @param child
                 */
                void appendChild(TreeNode* child);

                /**
                 * Возвращает потомка по указанному индексу
                 * @param TreeNode* row
                 * @return TreeNode*
                 */
                TreeNode* child(int row);
                /**
                 * Возвращает родителя
                 * @return TreeNode*
                 */
                TreeNode* parentItem();

                /**
                 * Кол-во потомков
                 * @return int
                 */
                int childCount() const;
                /**
                 * Кол-во колонок
                 * @return int
                 */
                int columnCount() const;
                /**
                 * Возвращает текущую строку
                 * @return int
                 */
                int row() const;

                /**
                 * Возвращает данные узла
                 * @param column
                 * @return QVariant
                 */
                QVariant data(int column) const;

            private:
                /**
                 * Потомки узла
                 */
                QVector<TreeNode*> _childItems;
                /**
                 * Данные узла
                 */
                QVector<QVariant> _itemData;
                /**
                 * Родитель узла
                 */
                TreeNode* _parentItem;
            };
        }
    }
}

#endif //SWAGGEREDITOR_SEMANTIC_TREE_NODE_H
