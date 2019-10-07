#ifndef SWAGGEREDITOR_MAIN_WINDOW_H
#define SWAGGEREDITOR_MAIN_WINDOW_H

#include <QtWidgets/QMainWindow>

namespace windows {
    /**
     * Основное окно приложения
     */
    class MainWindow : public QMainWindow {
    public:
        explicit MainWindow(QWidget* parent = nullptr);
        ~MainWindow() = default;

    private:
        /**
         * Метод инициализации GUI
         */
        const void init();
    };
}

#endif //SWAGGEREDITOR_MAIN_WINDOW_H
