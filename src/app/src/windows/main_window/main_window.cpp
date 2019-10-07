#include "main_window.h"

using namespace windows;

const int start_width  = 800; // Стартовая ширина
const int start_height = 600; // Стартовая высота

//
//  Конструкторы класса
//

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    resize(start_width, start_height);
    init();
}

//
//  Методы класса
//

//  Метод инициализации
const void MainWindow::init() {

}