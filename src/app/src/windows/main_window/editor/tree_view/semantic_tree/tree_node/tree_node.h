#ifndef SWAGGEREDITOR_SEMANTIC_TREE_NODE_H
#define SWAGGEREDITOR_SEMANTIC_TREE_NODE_H

namespace windows {
    namespace ui_mainwindow {
        namespace editor_widgets {
            /**
             * Узел семантического дерева
             */
            class TreeNode {
            public:
                TreeNode();
                ~TreeNode() = default;

                /**
                 * Рекурсивная очистка детей
                 */
                void clear();

            private:
            };
        }
    }
}

#endif //SWAGGEREDITOR_SEMANTIC_TREE_NODE_H
