/********************************************************************************
** Form generated from reading UI file 'fcfs_op_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCFS_OP_DIALOG_H
#define UI_FCFS_OP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_FCFS_OP_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FCFS_OP_Dialog)
    {
        if (FCFS_OP_Dialog->objectName().isEmpty())
            FCFS_OP_Dialog->setObjectName(QString::fromUtf8("FCFS_OP_Dialog"));
        FCFS_OP_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(FCFS_OP_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(FCFS_OP_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FCFS_OP_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FCFS_OP_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FCFS_OP_Dialog);
    } // setupUi

    void retranslateUi(QDialog *FCFS_OP_Dialog)
    {
        FCFS_OP_Dialog->setWindowTitle(QApplication::translate("FCFS_OP_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FCFS_OP_Dialog: public Ui_FCFS_OP_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFS_OP_DIALOG_H
