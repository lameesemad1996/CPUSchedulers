/********************************************************************************
** Form generated from reading UI file 'rr_op_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_OP_DIALOG_H
#define UI_RR_OP_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_RR_OP_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RR_OP_Dialog)
    {
        if (RR_OP_Dialog->objectName().isEmpty())
            RR_OP_Dialog->setObjectName(QString::fromUtf8("RR_OP_Dialog"));
        RR_OP_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(RR_OP_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(RR_OP_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RR_OP_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RR_OP_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RR_OP_Dialog);
    } // setupUi

    void retranslateUi(QDialog *RR_OP_Dialog)
    {
        RR_OP_Dialog->setWindowTitle(QApplication::translate("RR_OP_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR_OP_Dialog: public Ui_RR_OP_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_OP_DIALOG_H
