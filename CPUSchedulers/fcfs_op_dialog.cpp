#include "fcfs_op_dialog.h"
#include "ui_fcfs_op_dialog.h"

FCFS_OP_Dialog::FCFS_OP_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FCFS_OP_Dialog)
{
    ui->setupUi(this);
}

FCFS_OP_Dialog::~FCFS_OP_Dialog()
{
    delete ui;
}
