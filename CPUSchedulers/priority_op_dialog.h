#ifndef PRIORITY_OP_DIALOG_H
#define PRIORITY_OP_DIALOG_H

#include <QDialog>
#include "fcfs.h"
#include "priority_dialog.h"
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
#include <QColor>
#include<Qt>
#include "priority.h"


namespace Ui {
class Priority_OP_Dialog;
}

class Priority_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Priority_OP_Dialog(QWidget *parent = nullptr);
    ~Priority_OP_Dialog();
    list<process> static getInputs();
    list<slice> static getOP();
    void static showOP();
    static QMainWindow window;
    double static getWT();

private:
    Ui::Priority_OP_Dialog *ui;
};

#endif // PRIORITY_OP_DIALOG_H
