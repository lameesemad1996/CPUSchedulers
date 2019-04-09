#include "fcfs_dialog.h"
#include "ui_fcfs_dialog.h"

FCFS_Dialog::FCFS_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FCFS_Dialog)
{
    ui->setupUi(this);
}

FCFS_Dialog::~FCFS_Dialog()
{
    delete ui;
}
