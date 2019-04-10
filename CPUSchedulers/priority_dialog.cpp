#include "priority_dialog.h"
#include "ui_priority_dialog.h"
#include "priority_op_dialog.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
using namespace std;

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


void Priority_Dialog::createProcess()
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
    runLabel->setText("Running Time:");

    //arrival time
    QLabel* arriveLabel = new QLabel;
    QLineEdit* arriveLineEdit = new QLineEdit;
    arriveLabel->setText("Arrival Time:");

    //burst time
    QLabel* priorityLabel = new QLabel;
    QLineEdit* priorityLineEdit = new QLineEdit;
    priorityLabel->setText("Priority:");

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
    Priority_OP_Dialog priorityopDialog;
    priorityopDialog.setModal(true);
    priorityopDialog.exec();
}
