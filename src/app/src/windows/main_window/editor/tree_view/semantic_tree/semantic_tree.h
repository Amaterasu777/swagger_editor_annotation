#ifndef SWAGGEREDITOR_EDITOR_SEMANTIC_TREE_H
#define SWAGGEREDITOR_EDITOR_SEMANTIC_TREE_H

#include <QtCore/QAbstractItemModel>

#include "./tree_node/tree_node.h"

namespace windows {
    namespace ui_mainwindow {
        namespace editor_widgets {
            /**
             * Семантическое дерево виджета слева в редакторе
             */
            class SemanticTree : public QAbstractItemModel {
                Q_OBJECT

            public:
                explicit SemanticTree(QObject* parent = nullptr);
                ~SemanticTree() override;

                /**
                 * Возвращает данные узла относительно его ID
                 * @param index
                 * @param role
                 * @return
                 */
                QVariant data(const QModelIndex &index, int role) const override;
                /**
                 * Возвращает индекс, относительно строки и вложенности
                 * @param row
                 * @param column
                 * @param parent
                 * @return
                 */
                QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
                /**
                 * Возвращает родительский узел того узла который указали по ID
                 * @param index
                 * @return
                 */
                QModelIndex parent(const QModelIndex &index) const override;
                /**
                 * Кол-во строк
                 * @param parent
                 * @return
                 */
                int rowCount(const QModelIndex &parent = QModelIndex()) const override;
                /**
                 * Кол-во колонок (вложенностей)
                 * @param parent
                 * @return
                 */
                int columnCount(const QModelIndex &parent = QModelIndex()) const override;

            private:
                /**
                 * Корень дерева
                 */
                TreeNode* _root;

                /**
                 * Инициализирует семантическую модель
                 * @param lines
                 * @param parent
                 */
                void setupModelData(const QStringList &lines, TreeNode* parent);
            };
        }
    }
}

#endif //SWAGGEREDITOR_EDITOR_SEMANTIC_TREE_H
