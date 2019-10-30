#ifndef SWAGGEREDITOR_EDITOR_WORKSPACE_H
#define SWAGGEREDITOR_EDITOR_WORKSPACE_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

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
                 * Основной слой виджета
                 */
                QGridLayout* _layout;

                /**
                 * Лейбел имени
                 */
                QLabel* _labelName;
                /**
                 * Лейбел описания
                 */
                QLabel* _labelDescription;

                /**
                 * Редактор имени
                 */
                QLineEdit* _lineEditName;
                /**
                 * Редактор описания
                 */
                QLineEdit* _lineEditDescription;

                /**
                 * Метод инициализации
                 */
                void init();
            };
        }
    }
}

#endif //SWAGGEREDITOR_EDITOR_WORKSPACE_H
