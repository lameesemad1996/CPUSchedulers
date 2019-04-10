#include "priority_op_dialog.h"
#include "ui_priority_op_dialog.h"

Priority_OP_Dialog::Priority_OP_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Priority_OP_Dialog)
{
    ui->setupUi(this);
}

Priority_OP_Dialog::~Priority_OP_Dialog()
{
    delete ui;
}
