#ifndef SWAGGEREDITOR_EDITOR_WORKSPACE_H
#define SWAGGEREDITOR_EDITOR_WORKSPACE_H

#include <QtWidgets/QWidget>

namespace windows {
    namespace ui_mainwindow {
        namespace editor_widgets {
            /**
             * Виджет рабочей области
             */
            class Workspace : public QWidget {
            public:
                explicit Workspace(QWidget* parent = nullptr);
                ~Workspace() override = default;

            private:
                /**
                 * Метод инициализации
                 */
                void init();
            };
        }
    }
}

#endif //SWAGGEREDITOR_EDITOR_WORKSPACE_H
