#include "application.h"

//
//  Конструктор класса
//

Application::Application(int argc, char** argv) {
    _qApp = new QApplication(argc, argv);
    _mainWindow = new windows::MainWindow();

    _mainWindow->show();
}