#ifndef SWAGGEREDITOR_NAVIGATION_H
#define SWAGGEREDITOR_NAVIGATION_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>

namespace windows {
    namespace ui_mainwindow {
        /**
         * Навигационная панель окна
         */
        class Navigation : public QWidget {
        public:
            explicit Navigation(QWidget* parent = nullptr);
            ~Navigation() override = default;

        private:
            /**
             * Основной слой виджета
             */
            QHBoxLayout* _mainLayout;

            //
            //  Кнопки навигации
            //
            QPushButton* _buttonLoad;
            QPushButton* _buttonSave;
            QPushButton* _buttonOutput;

            /**
             * Подключает обработчики
             */
            void connectSlots();
        };
    }
}

#endif //SWAGGEREDITOR_NAVIGATION_H
