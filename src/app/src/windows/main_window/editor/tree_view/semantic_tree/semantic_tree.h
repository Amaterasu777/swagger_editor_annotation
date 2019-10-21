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

            private:
                /**
                 * Корень дерева
                 */
                TreeNode* _root;
            };
        }
    }
}

#endif //SWAGGEREDITOR_EDITOR_SEMANTIC_TREE_H
