#ifndef RR_DIALOG_H
#define RR_DIALOG_H

#include <QDialog>

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

private slots:
    void on_pushButton_addProcess_clicked();

    void on_pushButton_Go_clicked();

private:
    Ui::RR_Dialog *ui;
};

#endif // RR_DIALOG_H
