#ifndef RR_OP_DIALOG_H
#define RR_OP_DIALOG_H

#include <QDialog>

namespace Ui {
class RR_OP_Dialog;
}

class RR_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit RR_OP_Dialog(QWidget *parent = nullptr);
    ~RR_OP_Dialog();

private:
    Ui::RR_OP_Dialog *ui;
};

#endif // RR_OP_DIALOG_H
