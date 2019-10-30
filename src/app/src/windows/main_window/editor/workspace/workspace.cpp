#include "workspace.h"

using namespace windows::ui_mainwindow::editor_widgets;

//
//  Конструктор класса
//

Workspace::Workspace(QWidget* parent) : QWidget(parent) {
    setFixedHeight(150);
    init();
}

//
//  Методы класса
//

//  Метод инициализации
void Workspace::init() {
    _layout = new QGridLayout();

    _labelName = new QLabel("Name:");
    _labelDescription = new QLabel("Description:");

    _lineEditName = new QLineEdit();
    _lineEditDescription = new QLineEdit();

    _layout->addWidget(_labelName, 0, 0, Qt::AlignTop);
    _layout->addWidget(_lineEditName, 0, 1, Qt::AlignTop);

    _layout->addWidget(_labelDescription, 1, 0, Qt::AlignTop);
    _layout->addWidget(_lineEditDescription, 1, 1, Qt::AlignTop);

    setLayout(_layout);
}