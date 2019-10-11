#ifndef SWAGGEREDITOR_MESSAGES_NOT_IMPLEMENTED_H
#define SWAGGEREDITOR_MESSAGES_NOT_IMPLEMENTED_H

#include <QtWidgets/QMessageBox>

namespace messages {
    /**
     * Выводит окно с сообщением о том что ф-ция еще не реализована
     */
    class NotImplemented : public QMessageBox {
    public:
        NotImplemented() : QMessageBox() {
            setText("This function not implemented yet!");
            exec();
        }
        ~NotImplemented() override = default;
    };
}

#endif //SWAGGEREDITOR_MESSAGES_NOT_IMPLEMENTED_H
