/********************************************************************************
** Form generated from reading UI file 'priority_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIORITY_DIALOG_H
#define UI_PRIORITY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Priority_Dialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Priority_Dialog)
    {
        if (Priority_Dialog->objectName().isEmpty())
            Priority_Dialog->setObjectName(QString::fromUtf8("Priority_Dialog"));
        Priority_Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(Priority_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Priority_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Priority_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Priority_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Priority_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Priority_Dialog)
    {
        Priority_Dialog->setWindowTitle(QApplication::translate("Priority_Dialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Priority_Dialog: public Ui_Priority_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITY_DIALOG_H
