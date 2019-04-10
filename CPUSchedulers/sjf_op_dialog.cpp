#include "sjf_op_dialog.h"
#include "ui_sjf_op_dialog.h"

SJF_OP_Dialog::SJF_OP_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SJF_OP_Dialog)
{
    ui->setupUi(this);
}

SJF_OP_Dialog::~SJF_OP_Dialog()
{
    delete ui;
}
