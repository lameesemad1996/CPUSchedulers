#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "fcfs_dialog.h"
#include "sjf_dialog.h"
#include "priority_dialog.h"
#include "rr_dialog.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_fcfs, SIGNAL(released()),this, SLOT(fcfs_pressed()));
    connect(ui->pushButton_sjf, SIGNAL(released()),this, SLOT(sjf_pressed()));
    connect(ui->pushButton_priority, SIGNAL(released()),this, SLOT(priority_pressed()));
    connect(ui->pushButton_rr, SIGNAL(released()),this, SLOT(rr_pressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fcfs_pressed()
{
    //Modal approach
    FCFS_Dialog fcfsDialog;
    fcfsDialog.setModal(true);
    fcfsDialog.exec();

    /*
    //Modaless approach
    fcfsDialog = new FCFS_Dialog(this);
    fcfsDialog->show();
    */
}
void MainWindow::sjf_pressed()
{
    SJF_Dialog sjfDialog;
    sjfDialog.setModal(true);
    sjfDialog.exec();
}
void MainWindow::priority_pressed()
{
    Priority_Dialog priorityDialog;
    priorityDialog.setModal(true);
    priorityDialog.exec();
}
void MainWindow::rr_pressed()
{
    RR_Dialog rrDialog;
    rrDialog.setModal(true);
    rrDialog.exec();
}
