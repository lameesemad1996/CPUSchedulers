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

private:
    Ui::RR_Dialog *ui;
};

#endif // RR_DIALOG_H
