#ifndef SWAGGEREDITOR_MAIN_WINDOW_H
#define SWAGGEREDITOR_MAIN_WINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>

#include "./navigation/navigation.h"
#include "./editor/editor.h"

namespace windows {
    /**
     * Основное окно приложения
     */
    class MainWindow : public QMainWindow {
    public:
        explicit MainWindow(QWidget* parent = nullptr);
        ~MainWindow() override = default;

    private:
        /**
         * Основной вертикальный слой окна
         */
        QVBoxLayout* _mainLayout;
        /**
         * Основной виджет окна
         */
        QWidget* _centerWidget;
        /**
         * Навигация окна
         */
        ui_mainwindow::Navigation* _navigation;
        /**
         * Основное окно редактора
         */
        ui_mainwindow::Editor* _editor;

        /**
         * Метод инициализации GUI
         */
        void init();
    };
}

#endif //SWAGGEREDITOR_MAIN_WINDOW_H
