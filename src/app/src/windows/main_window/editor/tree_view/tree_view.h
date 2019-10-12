#ifndef SWAGGEREDITOR_EDITOR_TREE_VIEW_H
#define SWAGGEREDITOR_EDITOR_TREE_VIEW_H

#include <QtWidgets/QTreeView>

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
            };
        }
    }
}

#endif //SWAGGEREDITOR_EDITOR_TREE_VIEW_H
