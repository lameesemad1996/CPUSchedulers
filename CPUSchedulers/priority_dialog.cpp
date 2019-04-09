#include "priority_dialog.h"
#include "ui_priority_dialog.h"

Priority_Dialog::Priority_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Priority_Dialog)
{
    ui->setupUi(this);
}

Priority_Dialog::~Priority_Dialog()
{
    delete ui;
}
