#ifndef FCFS_OP_DIALOG_H
#define FCFS_OP_DIALOG_H

#include <QDialog>

namespace Ui {
class FCFS_OP_Dialog;
}

class FCFS_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit FCFS_OP_Dialog(QWidget *parent = nullptr);
    ~FCFS_OP_Dialog();

private:
    Ui::FCFS_OP_Dialog *ui;
};

#endif // FCFS_OP_DIALOG_H
