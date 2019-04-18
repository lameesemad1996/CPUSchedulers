#ifndef SJF_DIALOG_H
#define SJF_DIALOG_H

#include <QDialog>
#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include<QHBoxLayout>
#include <string>
#include<iostream>
#include "fcfs.h"
#include "sjf.h"

using namespace std;
namespace Ui {
class SJF_Dialog;
}

class SJF_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SJF_Dialog(QWidget *parent = nullptr);
    ~SJF_Dialog();
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

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_Go_clicked();

private:
    Ui::SJF_Dialog *ui;
};

#endif // SJF_DIALOG_H
