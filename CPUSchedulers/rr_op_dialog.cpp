#include "rr_op_dialog.h"
#include "ui_rr_op_dialog.h"

RR_OP_Dialog::RR_OP_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RR_OP_Dialog)
{
    ui->setupUi(this);
}

RR_OP_Dialog::~RR_OP_Dialog()
{
    delete ui;
}
