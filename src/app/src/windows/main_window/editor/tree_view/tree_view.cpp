#include "tree_view.h"

using namespace windows::ui_mainwindow::editor_widgets;

//
//  Конструктор класса
//

TreeView::TreeView(QWidget* parent) : QTreeView(parent) {
    setFixedWidth(200);
    setModel(&_tree);
}