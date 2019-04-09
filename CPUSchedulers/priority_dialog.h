#ifndef PRIORITY_DIALOG_H
#define PRIORITY_DIALOG_H

#include <QDialog>

namespace Ui {
class Priority_Dialog;
}

class Priority_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Priority_Dialog(QWidget *parent = nullptr);
    ~Priority_Dialog();

private:
    Ui::Priority_Dialog *ui;
};

#endif // PRIORITY_DIALOG_H
