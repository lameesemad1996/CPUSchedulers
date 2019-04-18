#ifndef FCFS_DIALOG_H
#define FCFS_DIALOG_H

#include <QDialog>
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
#include "fcfs.h"

using namespace std;

namespace Ui {
class FCFS_Dialog;
}

class FCFS_Dialog : public QDialog
{
    Q_OBJECT

public:

    explicit FCFS_Dialog(QWidget *parent = nullptr);
    ~FCFS_Dialog();
    void createProcess();
    QLineEdit* runLineEditsPtrs[20];
    QLineEdit* arriveLineEditsPtrs[20];
    static process* inputProcessesPtrs[100];
    static int length;
    int count;
    static int lengthFlagIndex;
    static int lengthFlag[100];

private slots:
    void on_pushButton_addProcess_clicked();

    void on_pushButton_Go_clicked();


private:
    Ui::FCFS_Dialog *ui;
};

#endif // FCFS_DIALOG_H
