#include "editor.h"

using namespace windows::ui_mainwindow;

//
//  Конструктор класса
//

Editor::Editor(QWidget* parent) : QWidget(parent) {
    init();
}

//
//  Методы класса
//

//  Метод инициализации
void Editor::init() {
    _mainLayout = new QHBoxLayout();
    _treeView = new editor_widgets::TreeView();
    _workspace = new editor_widgets::Workspace();

    _mainLayout->addWidget(_treeView);
    _mainLayout->addWidget(_workspace, 0, Qt::AlignTop);

    setLayout(_mainLayout);
}