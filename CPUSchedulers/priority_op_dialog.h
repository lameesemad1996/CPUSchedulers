#ifndef PRIORITY_OP_DIALOG_H
#define PRIORITY_OP_DIALOG_H

#include <QDialog>

namespace Ui {
class Priority_OP_Dialog;
}

class Priority_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Priority_OP_Dialog(QWidget *parent = nullptr);
    ~Priority_OP_Dialog();

private:
    Ui::Priority_OP_Dialog *ui;
};

#endif // PRIORITY_OP_DIALOG_H
