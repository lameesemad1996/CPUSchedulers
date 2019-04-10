#include "rr_dialog.h"
#include "ui_rr_dialog.h"
#include "rr_op_dialog.h"
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
using namespace std;

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


void RR_Dialog::createProcess()
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
    QLabel* quantumLabel = new QLabel;
    QLineEdit* quantumLineEdit = new QLineEdit;
    quantumLabel->setText("Time Quantum:");

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
    internalLayout->addWidget(quantumLabel);
    internalLayout->addWidget(quantumLineEdit);
    ui->verticalLayout_2->addLayout(mainLayout);

    QWidget::setLayout(mainLayout);
}



void RR_Dialog::on_pushButton_addProcess_clicked()
{
    RR_Dialog::createProcess();
}

void RR_Dialog::on_pushButton_Go_clicked()
{
    RR_OP_Dialog rropDialog;
    rropDialog.setModal(true);
    rropDialog.exec();
}
