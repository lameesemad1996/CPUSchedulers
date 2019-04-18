#include "sjf_dialog.h"
#include "ui_sjf_dialog.h"
#include "sjf_op_dialog.h"
#include "sjf.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include <QHBoxLayout>
#include <string>
#include <iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <QMainWindow>

using namespace std;

SJF_Dialog::SJF_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SJF_Dialog)
{
    ui->setupUi(this);
    count = 0;
}

SJF_Dialog::~SJF_Dialog()
{
    delete ui;
}

process* SJF_Dialog::inputProcessesPtrs[100];
int SJF_Dialog::length = 0;
int SJF_Dialog::lengthFlag[100] = {0};
int SJF_Dialog::lengthFlagIndex = 0;

void SJF_Dialog::createProcess()
{
    //static int count = 0;

    //processLabel
    QLabel* processLabel = new QLabel;
    QString countToString = QString::number(count);
    processLabel->setText("Process" + countToString);
    processLabel->setMinimumWidth(50);

    //running time
    QLabel* runLabel = new QLabel;
    QLineEdit* runLineEdit = new QLineEdit;
    runLineEditsPtrs[count] = runLineEdit;
    runLabel->setText("Running Time:");

    //arrival time
    QLabel* arriveLabel = new QLabel;
    QLineEdit* arriveLineEdit = new QLineEdit;
    arriveLineEditsPtrs[count] = arriveLineEdit;
    arriveLabel->setText("Arrival Time:");

    /*
    //burst time
    QLabel* burstLabel = new QLabel;
    QLineEdit* burstLineEdit = new QLineEdit;
    burstLabel->setText("Burst Time:");
    */

    SJF_Dialog::length++;
    count++;

    //creating layouts
    QVBoxLayout* mainLayout = new QVBoxLayout;
    QHBoxLayout* internalLayout = new QHBoxLayout;



    //organizing widgits
    mainLayout->addWidget(processLabel);

    mainLayout->addLayout(internalLayout);
    internalLayout->addWidget(runLabel);
    internalLayout->addWidget(runLineEdit);
    internalLayout->addWidget(arriveLabel);
    internalLayout->addWidget(arriveLineEdit);
    //internalLayout->addWidget(burstLabel);
    //internalLayout->addWidget(burstLineEdit);
    ui->verticalLayout_2->addLayout(mainLayout);

    QWidget::setLayout(mainLayout);
}




void SJF_Dialog::on_pushButton_addProcess_clicked()
{
    SJF_Dialog::createProcess();

}

void SJF_Dialog::on_checkBox_stateChanged(int arg1)
{
    // set preemptive flag to true or false according to state
    // use states: Qt::Unchecked or Qt::Checked
}

void SJF_Dialog::on_pushButton_Go_clicked()
{
    SJF_Dialog::lengthFlag[SJF_Dialog::lengthFlagIndex] = SJF_Dialog::length;

    //saving inputs
    for(int i = 0; i <= (((SJF_Dialog::length) - (SJF_Dialog::lengthFlag[SJF_Dialog::lengthFlagIndex-1])) - 1); i++)
    {
        SJF_Dialog::inputProcessesPtrs[i] = new process;
        SJF_Dialog::inputProcessesPtrs[i]->runningTime = SJF_Dialog::runLineEditsPtrs[i]->text().toLong();
        SJF_Dialog::inputProcessesPtrs[i]->arrivalTime = SJF_Dialog::arriveLineEditsPtrs[i]->text().toLong();
    }

    SJF_OP_Dialog::showOP();
    SJF_Dialog::lengthFlagIndex++;

}
