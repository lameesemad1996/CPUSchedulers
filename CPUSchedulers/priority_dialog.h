#ifndef PRIORITY_DIALOG_H
#define PRIORITY_DIALOG_H

#include <QDialog>
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
#include "fcfs.h"
#include "priority.h"

namespace Ui {
class Priority_Dialog;
}

class Priority_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Priority_Dialog(QWidget *parent = nullptr);
    ~Priority_Dialog();
    void createProcess();
    QLineEdit* runLineEditsPtrs[20];
    QLineEdit* arriveLineEditsPtrs[20];
    QLineEdit* priorityLineEditsPtrs[20];
    static process* inputProcessesPtrs[100];
    static int length;
    int count;
    static int lengthFlagIndex;
    static int lengthFlag[100];

private slots:
    void on_pushButton_addProcess_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_Go_clicked();

private:
    Ui::Priority_Dialog *ui;
};

#endif // PRIORITY_DIALOG_H
