#ifndef SWAGGEREDITOR_EDITOR_H
#define SWAGGEREDITOR_EDITOR_H

#include <QtWidgets/QWidget>

namespace windows {
    namespace ui_mainwindow {
        /**
         * Виджет с полями редактора
         */
        class Editor : public QWidget {
        public:
            explicit Editor(QWidget* parent = nullptr);
            ~Editor() override = default;
        };
    }
}

#endif //SWAGGEREDITOR_EDITOR_H
