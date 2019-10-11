#include "main_window.h"
#include <messages/not_implemented.h>

using namespace windows;

const int start_width  = 800; // Стартовая ширина
const int start_height = 600; // Стартовая высота

//
//  Конструкторы класса
//

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    resize(start_width, start_height);
    init();
    connectSlots();
}

//
//  Методы класса
//

//  Метод инициализации
void MainWindow::init() {
    _mainLayout = new QVBoxLayout();
    _navigation = new ui_mainwindow::Navigation();
    _editor = new ui_mainwindow::Editor();

    _mainLayout->addWidget(_navigation);
    _mainLayout->addWidget(_editor);

    _centerWidget = new QWidget();
    _centerWidget->setLayout(_mainLayout);

    setCentralWidget(_centerWidget);
}

//  Метод подключения слотов
void MainWindow::connectSlots() {
    connect(_navigation, SIGNAL(outputClicked()), this, SLOT(onOutputClicked()));
}

//
//  Слоты класса
//

//  Обработка события вывода
void MainWindow::onOutputClicked() {
    messages::NotImplemented();
}