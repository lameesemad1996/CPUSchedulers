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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SJF_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_addProcess;
    QCheckBox *checkBox;
    QPushButton *pushButton_Go;

    void setupUi(QDialog *SJF_Dialog)
    {
        if (SJF_Dialog->objectName().isEmpty())
            SJF_Dialog->setObjectName(QString::fromUtf8("SJF_Dialog"));
        SJF_Dialog->resize(877, 556);
        SJF_Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 239, 255);"));
        verticalLayoutWidget = new QWidget(SJF_Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 841, 441));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_addProcess = new QPushButton(SJF_Dialog);
        pushButton_addProcess->setObjectName(QString::fromUtf8("pushButton_addProcess"));
        pushButton_addProcess->setGeometry(QRect(20, 464, 841, 28));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_addProcess->sizePolicy().hasHeightForWidth());
        pushButton_addProcess->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton_addProcess->setFont(font);
        pushButton_addProcess->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color:rgb(208, 201, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        checkBox = new QCheckBox(SJF_Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 494, 131, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        checkBox->setFont(font1);
        pushButton_Go = new QPushButton(SJF_Dialog);
        pushButton_Go->setObjectName(QString::fromUtf8("pushButton_Go"));
        pushButton_Go->setGeometry(QRect(20, 520, 841, 28));
        sizePolicy.setHeightForWidth(pushButton_Go->sizePolicy().hasHeightForWidth());
        pushButton_Go->setSizePolicy(sizePolicy);
        pushButton_Go->setFont(font);
        pushButton_Go->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color:rgb(208, 201, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        retranslateUi(SJF_Dialog);

        QMetaObject::connectSlotsByName(SJF_Dialog);
    } // setupUi

    void retranslateUi(QDialog *SJF_Dialog)
    {
        SJF_Dialog->setWindowTitle(QApplication::translate("SJF_Dialog", "Dialog", nullptr));
        pushButton_addProcess->setText(QApplication::translate("SJF_Dialog", "Add Process", nullptr));
        checkBox->setText(QApplication::translate("SJF_Dialog", "Preemptive", nullptr));
        pushButton_Go->setText(QApplication::translate("SJF_Dialog", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SJF_Dialog: public Ui_SJF_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SJF_DIALOG_H
