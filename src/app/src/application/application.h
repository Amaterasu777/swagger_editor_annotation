#ifndef SWAGGEREDITOR_APPLICATION_H
#define SWAGGEREDITOR_APPLICATION_H

#include <QtWidgets/QApplication>
#include "windows/main_window/main_window.h"

/**
 * Основной класс приложения
 */
class Application {
public:
    /**
     * Конструктор класса
     * @param argc - кол-во аргументов запуска
     * @param argv - аргументы запуска
     */
    Application(int argc, char** argv);
    ~Application() = default;

    /**
     * Запускает основной поток приложения Qt
     * @return int - код ошибки
     */
    int exec() { return _qApp->exec(); }

private:
    /**
     * Qt приложение
     */
    QApplication* _qApp;

    /**
     * Основное окно приложения
     */
    windows::MainWindow* _mainWindow;
};

#endif //SWAGGEREDITOR_APPLICATION_H
