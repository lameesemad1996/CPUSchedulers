/********************************************************************************
** Form generated from reading UI file 'rr_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RR_DIALOG_H
#define UI_RR_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_RR_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RR_Dialog)
    {
        if (RR_Dialog->objectName().isEmpty())
            RR_Dialog->setObjectName(QString::fromUtf8("RR_Dialog"));
        RR_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(RR_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(RR_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RR_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RR_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RR_Dialog);
    } // setupUi

    void retranslateUi(QDialog *RR_Dialog)
    {
        RR_Dialog->setWindowTitle(QApplication::translate("RR_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR_Dialog: public Ui_RR_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_DIALOG_H
