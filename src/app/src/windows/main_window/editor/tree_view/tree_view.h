#ifndef SWAGGEREDITOR_EDITOR_TREE_VIEW_H
#define SWAGGEREDITOR_EDITOR_TREE_VIEW_H

#include <QtWidgets/QTreeView>
#include "./semantic_tree/semantic_tree.h"

namespace windows {
    namespace ui_mainwindow {
        namespace editor_widgets {
            /**
             * Виджет семантического дерева
             */
            class TreeView : public QTreeView {
            public:
                explicit TreeView(QWidget* parent = nullptr);
                ~TreeView() override = default;

            private:
                /**
                 * Семантическое дерево
                 */
                SemanticTree _tree;
            };
        }
    }
}

#endif //SWAGGEREDITOR_EDITOR_TREE_VIEW_H
