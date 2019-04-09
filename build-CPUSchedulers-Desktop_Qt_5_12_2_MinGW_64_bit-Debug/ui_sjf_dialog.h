/********************************************************************************
** Form generated from reading UI file 'sjf_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SJF_DIALOG_H
#define UI_SJF_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_SJF_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SJF_Dialog)
    {
        if (SJF_Dialog->objectName().isEmpty())
            SJF_Dialog->setObjectName(QString::fromUtf8("SJF_Dialog"));
        SJF_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(SJF_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SJF_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SJF_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SJF_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SJF_Dialog);
    } // setupUi

    void retranslateUi(QDialog *SJF_Dialog)
    {
        SJF_Dialog->setWindowTitle(QApplication::translate("SJF_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SJF_Dialog: public Ui_SJF_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJF_DIALOG_H
