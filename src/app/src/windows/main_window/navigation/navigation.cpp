#include "navigation.h"
#include <messages/not_implemented.h>

using namespace windows::ui_mainwindow;

//
//  Конструктор класса
//

Navigation::Navigation(QWidget* parent) : QWidget(parent) {
    setFixedHeight(50);
    _mainLayout = new QHBoxLayout(this);

    _buttonLoad = new QPushButton();
    _buttonSave = new QPushButton();
    _buttonOutput = new QPushButton();

    _buttonLoad->setFixedSize(100, 30);
    _buttonLoad->setText("Load");

    _buttonSave->setFixedSize(100, 30);
    _buttonSave->setText("Save");

    _buttonOutput->setFixedSize(100, 30);
    _buttonOutput->setText("Output");

    _mainLayout->addWidget(_buttonLoad);
    _mainLayout->addWidget(_buttonSave);
    _mainLayout->addWidget(_buttonOutput);
    _mainLayout->addStretch();

    connectSlots();
}

//
//  Методы класса
//

void Navigation::connectSlots() {
    connect(_buttonSave, &QPushButton::clicked, this, []() { messages::NotImplemented(); });
    connect(_buttonLoad, &QPushButton::clicked, this, []() { messages::NotImplemented(); });
    connect(_buttonOutput, &QPushButton::clicked, this, [this]() { emit outputClicked(); });
}
