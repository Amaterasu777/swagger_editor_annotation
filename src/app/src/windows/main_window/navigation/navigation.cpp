#include "navigation.h"

using namespace windows::ui_mainwindow;

//
//  Конструктор класса
//

Navigation::Navigation(QWidget* parent) : QWidget(parent) {
    setFixedHeight(50);
    _mainLayout = new QHBoxLayout(this);

    _buttonLoad = new QPushButton();
    _buttonSave = new QPushButton();

    _buttonLoad->setFixedSize(100, 30);
    _buttonLoad->setText("Load");

    _buttonSave->setFixedSize(100, 30);
    _buttonSave->setText("Save");

    _mainLayout->addWidget(_buttonLoad);
    _mainLayout->addWidget(_buttonSave);
    _mainLayout->addStretch();
}