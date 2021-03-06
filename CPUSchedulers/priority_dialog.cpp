#include "priority_dialog.h"
#include "ui_priority_dialog.h"
#include "priority_op_dialog.h"
#include "fcfs.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
#include <list>
#include <iterator>
#include <cstdlib>
#include <QMainWindow>
#include "priority.h"

using namespace std;

Priority_Dialog::Priority_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Priority_Dialog)
{
    ui->setupUi(this);
    count = 0;

}

Priority_Dialog::~Priority_Dialog()
{
    delete ui;
}

process* Priority_Dialog::inputProcessesPtrs[100];
int Priority_Dialog::length = 0;
int Priority_Dialog::lengthFlag[100] = {0};
int Priority_Dialog::lengthFlagIndex = 0;

void Priority_Dialog::createProcess()
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

    //priority
    QLabel* priorityLabel = new QLabel;
    QLineEdit* priorityLineEdit = new QLineEdit;
    priorityLineEditsPtrs[count] = priorityLineEdit;
    priorityLabel->setText("Priority:");

    Priority_Dialog::length++;
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
    internalLayout->addWidget(priorityLabel);
    internalLayout->addWidget(priorityLineEdit);
    ui->verticalLayout_2->addLayout(mainLayout);

    QWidget::setLayout(mainLayout);
}
void Priority_Dialog::on_pushButton_addProcess_clicked()
{
    Priority_Dialog::createProcess();
}

void Priority_Dialog::on_checkBox_stateChanged(int arg1)
{
    // set preemptive flag to true or false according to state
    // use states: Qt::Unchecked or Qt::Checked
}

void Priority_Dialog::on_pushButton_Go_clicked()
{
    Priority_Dialog::lengthFlag[Priority_Dialog::lengthFlagIndex] = Priority_Dialog::length;

    //saving inputs
    for(int i = 0; i <= (((Priority_Dialog::length) - (Priority_Dialog::lengthFlag[Priority_Dialog::lengthFlagIndex-1])) - 1); i++)
    {
        Priority_Dialog::inputProcessesPtrs[i] = new process;
        Priority_Dialog::inputProcessesPtrs[i]->runningTime = Priority_Dialog::runLineEditsPtrs[i]->text().toLong();
        Priority_Dialog::inputProcessesPtrs[i]->arrivalTime = Priority_Dialog::arriveLineEditsPtrs[i]->text().toLong();
        Priority_Dialog::inputProcessesPtrs[i]->priority = Priority_Dialog::priorityLineEditsPtrs[i]->text().toLong();
    }

    Priority_OP_Dialog::showOP();
    Priority_Dialog::lengthFlagIndex++;

}
