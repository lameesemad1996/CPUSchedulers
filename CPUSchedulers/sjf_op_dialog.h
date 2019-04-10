#ifndef SJF_OP_DIALOG_H
#define SJF_OP_DIALOG_H

#include <QDialog>

namespace Ui {
class SJF_OP_Dialog;
}

class SJF_OP_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SJF_OP_Dialog(QWidget *parent = nullptr);
    ~SJF_OP_Dialog();

private:
    Ui::SJF_OP_Dialog *ui;
};

#endif // SJF_OP_DIALOG_H
