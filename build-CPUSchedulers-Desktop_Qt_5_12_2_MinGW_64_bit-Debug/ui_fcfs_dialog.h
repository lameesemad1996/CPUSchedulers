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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FCFS_Dialog
{
public:
    QPushButton *pushButton_addProcess;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Go;

    void setupUi(QDialog *FCFS_Dialog)
    {
        if (FCFS_Dialog->objectName().isEmpty())
            FCFS_Dialog->setObjectName(QString::fromUtf8("FCFS_Dialog"));
        FCFS_Dialog->resize(918, 546);
        pushButton_addProcess = new QPushButton(FCFS_Dialog);
        pushButton_addProcess->setObjectName(QString::fromUtf8("pushButton_addProcess"));
        pushButton_addProcess->setGeometry(QRect(11, 470, 891, 28));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_addProcess->sizePolicy().hasHeightForWidth());
        pushButton_addProcess->setSizePolicy(sizePolicy);
        verticalLayoutWidget_2 = new QWidget(FCFS_Dialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(11, 11, 891, 451));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Go = new QPushButton(FCFS_Dialog);
        pushButton_Go->setObjectName(QString::fromUtf8("pushButton_Go"));
        pushButton_Go->setGeometry(QRect(10, 510, 891, 28));
        sizePolicy.setHeightForWidth(pushButton_Go->sizePolicy().hasHeightForWidth());
        pushButton_Go->setSizePolicy(sizePolicy);

        retranslateUi(FCFS_Dialog);

        QMetaObject::connectSlotsByName(FCFS_Dialog);
    } // setupUi

    void retranslateUi(QDialog *FCFS_Dialog)
    {
        FCFS_Dialog->setWindowTitle(QApplication::translate("FCFS_Dialog", "Dialog", nullptr));
        pushButton_addProcess->setText(QApplication::translate("FCFS_Dialog", "Add Process", nullptr));
        pushButton_Go->setText(QApplication::translate("FCFS_Dialog", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FCFS_Dialog: public Ui_FCFS_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FCFS_DIALOG_H
