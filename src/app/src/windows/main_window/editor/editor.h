#ifndef SWAGGEREDITOR_EDITOR_H
#define SWAGGEREDITOR_EDITOR_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>

#include "./tree_view/tree_view.h"
#include "./workspace/workspace.h"

namespace windows {
    namespace ui_mainwindow {
        /**
         * Виджет с полями редактора
         */
        class Editor : public QWidget {
        public:
            explicit Editor(QWidget* parent = nullptr);
            ~Editor() override = default;

        private:
            /**
             * Основной слой виджета
             */
            QHBoxLayout* _mainLayout;
            /**
             * Виджет семантического дерева
             */
            editor_widgets::TreeView* _treeView;
            /**
             * Виджет рабочей области
             */
            editor_widgets::Workspace* _workspace;

            /**
             * Метод инициализации
             */
            void init();
        };
    }
}

#endif //SWAGGEREDITOR_EDITOR_H
