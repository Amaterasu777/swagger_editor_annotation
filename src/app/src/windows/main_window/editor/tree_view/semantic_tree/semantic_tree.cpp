#include "semantic_tree.h"

using namespace windows::ui_mainwindow::editor_widgets;

//
//  Конструктор и деструктор класса
//

SemanticTree::SemanticTree(QObject* parent) : QAbstractItemModel(parent) {
    _root = nullptr;
}

SemanticTree::~SemanticTree() {
    //  Если в корне что-есть, то очистим это
    if (_root) {
        _root->clear();
        delete _root;
    }
}
