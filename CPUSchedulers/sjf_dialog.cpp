#include "sjf_dialog.h"
#include "ui_sjf_dialog.h"

SJF_Dialog::SJF_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SJF_Dialog)
{
    ui->setupUi(this);
}

SJF_Dialog::~SJF_Dialog()
{
    delete ui;
}
