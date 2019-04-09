/********************************************************************************
** Form generated from reading UI file 'fcfs_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FCFS_DIALOG_H
#define UI_FCFS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_FCFS_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FCFS_Dialog)
    {
        if (FCFS_Dialog->objectName().isEmpty())
            FCFS_Dialog->setObjectName(QString::fromUtf8("FCFS_Dialog"));
        FCFS_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(FCFS_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(FCFS_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FCFS_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FCFS_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FCFS_Dialog);
    } // setupUi

    void retranslateUi(QDialog *FCFS_Dialog)
    {
        FCFS_Dialog->setWindowTitle(QApplication::translate("FCFS_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FCFS_Dialog: public Ui_FCFS_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFS_DIALOG_H
