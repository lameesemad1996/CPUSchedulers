#include "rr_dialog.h"
#include "ui_rr_dialog.h"
#include "rr_op_dialog.h"
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

using namespace std;


RR_Dialog::RR_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RR_Dialog)
{
    ui->setupUi(this);
    count = 0;
}

RR_Dialog::~RR_Dialog()
{
    delete ui;
}

process* RR_Dialog::inputProcessesPtrs[100];
int RR_Dialog::length = 0;
int RR_Dialog::quantumTime;
int RR_Dialog::lengthFlag[100] = {0};
int RR_Dialog::lengthFlagIndex = 0;

void RR_Dialog::createProcess()
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
    //quantum time
    QLabel* quantumLabel = new QLabel;
    QLineEdit* quantumLineEdit = new QLineEdit;
    quantumLabel->setText("Time Quantum:");
    */

    RR_Dialog::length++;
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
    ui->verticalLayout_2->addLayout(mainLayout);

    QWidget::setLayout(mainLayout);
}



void RR_Dialog::on_pushButton_addProcess_clicked()
{
    RR_Dialog::createProcess();
}

void RR_Dialog::on_pushButton_Go_clicked()
{
    RR_Dialog::lengthFlag[RR_Dialog::lengthFlagIndex] = RR_Dialog::length;

    RR_Dialog::quantumTime = ui->quantumTimeLineEdit->text().toLong();

    for(int i = 0; i <= (((RR_Dialog::length) - (RR_Dialog::lengthFlag[RR_Dialog::lengthFlagIndex-1])) - 1); i++)
    {
        RR_Dialog::inputProcessesPtrs[i] = new process;
        RR_Dialog::inputProcessesPtrs[i]->runningTime = RR_Dialog::runLineEditsPtrs[i]->text().toLong();
        RR_Dialog::inputProcessesPtrs[i]->arrivalTime = RR_Dialog::arriveLineEditsPtrs[i]->text().toLong();

    }

    RR_OP_Dialog::showOP();
    RR_Dialog::lengthFlagIndex++;

}
