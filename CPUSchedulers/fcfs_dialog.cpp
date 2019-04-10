#include "fcfs_dialog.h"
#include "ui_fcfs_dialog.h"
#include "fcfs_op_dialog.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
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
    runLabel->setText("Running Time:");

    //arrival time
    QLabel* arriveLabel = new QLabel;
    QLineEdit* arriveLineEdit = new QLineEdit;
    arriveLabel->setText("Arrival Time:");

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
    FCFS_OP_Dialog fcfsopDialog;
    fcfsopDialog.setModal(true);
    fcfsopDialog.exec();
}
