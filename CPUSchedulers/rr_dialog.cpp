#include "rr_dialog.h"
#include "ui_rr_dialog.h"

RR_Dialog::RR_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RR_Dialog)
{
    ui->setupUi(this);
}

RR_Dialog::~RR_Dialog()
{
    delete ui;
}
