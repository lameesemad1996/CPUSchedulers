#include "fcfs_dialog.h"
#include "ui_fcfs_dialog.h"
#include "fcfs_op_dialog.h"
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

process* FCFS_Dialog::inputProcessesPtrs[20];
int FCFS_Dialog::length = 0;

void FCFS_Dialog::createProcess()
{
    static int count = 0;
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

    FCFS_Dialog::length++;
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

void FCFS_Dialog::on_pushButton_addProcess_clicked()
{
    FCFS_Dialog::createProcess();
}

void FCFS_Dialog::on_pushButton_Go_clicked()
{
    //saving inputs
    for(int i = 0; i <= length-1; i++)
    {
        FCFS_Dialog::inputProcessesPtrs[i] = new process;
        FCFS_Dialog::inputProcessesPtrs[i]->runningTime = FCFS_Dialog::runLineEditsPtrs[i]->text().toLong();
        FCFS_Dialog::inputProcessesPtrs[i]->arrivalTime = FCFS_Dialog::arriveLineEditsPtrs[i]->text().toLong();
    }

    FCFS_OP_Dialog::showOP();

    /*
  //opening new window
    FCFS_OP_Dialog fcfsopDialog;
    fcfsopDialog.setModal(true);
    fcfsopDialog.exec();
    */
}
