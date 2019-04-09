#ifndef SJF_DIALOG_H
#define SJF_DIALOG_H

#include <QDialog>

namespace Ui {
class SJF_Dialog;
}

class SJF_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit SJF_Dialog(QWidget *parent = nullptr);
    ~SJF_Dialog();

private:
    Ui::SJF_Dialog *ui;
};

#endif // SJF_DIALOG_H
