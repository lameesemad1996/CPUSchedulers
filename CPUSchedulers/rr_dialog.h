#ifndef RR_DIALOG_H
#define RR_DIALOG_H

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
class RR_Dialog;
}

class RR_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit RR_Dialog(QWidget *parent = nullptr);
    ~RR_Dialog();
    void createProcess();
    QLineEdit* runLineEditsPtrs[20];
    QLineEdit* arriveLineEditsPtrs[20];
    static process* inputProcessesPtrs[100];
    static int length;
    static int quantumTime;
    int count;
    static int lengthFlagIndex;
    static int lengthFlag[100];

private slots:
    void on_pushButton_addProcess_clicked();

    void on_pushButton_Go_clicked();

private:
    Ui::RR_Dialog *ui;
};

#endif // RR_DIALOG_H
