#ifndef FCFS_DIALOG_H
#define FCFS_DIALOG_H

#include <QDialog>

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


private slots:
    void on_pushButton_addProcess_clicked();

    void on_pushButton_Go_clicked();

private:
    Ui::FCFS_Dialog *ui;
};

#endif // FCFS_DIALOG_H
