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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Priority_Dialog
{
public:
    QCheckBox *checkBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_addProcess;
    QPushButton *pushButton_Go;

    void setupUi(QDialog *Priority_Dialog)
    {
        if (Priority_Dialog->objectName().isEmpty())
            Priority_Dialog->setObjectName(QString::fromUtf8("Priority_Dialog"));
        Priority_Dialog->resize(878, 567);
        Priority_Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 239, 255);"));
        checkBox = new QCheckBox(Priority_Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 500, 121, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        checkBox->setFont(font);
        verticalLayoutWidget = new QWidget(Priority_Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 16, 841, 441));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_addProcess = new QPushButton(Priority_Dialog);
        pushButton_addProcess->setObjectName(QString::fromUtf8("pushButton_addProcess"));
        pushButton_addProcess->setGeometry(QRect(20, 470, 841, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_addProcess->sizePolicy().hasHeightForWidth());
        pushButton_addProcess->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_addProcess->setFont(font1);
        pushButton_addProcess->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color:rgb(208, 201, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_Go = new QPushButton(Priority_Dialog);
        pushButton_Go->setObjectName(QString::fromUtf8("pushButton_Go"));
        pushButton_Go->setGeometry(QRect(20, 530, 841, 28));
        sizePolicy1.setHeightForWidth(pushButton_Go->sizePolicy().hasHeightForWidth());
        pushButton_Go->setSizePolicy(sizePolicy1);
        pushButton_Go->setFont(font1);
        pushButton_Go->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: 	rgb(208, 201, 255);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));

        retranslateUi(Priority_Dialog);

        QMetaObject::connectSlotsByName(Priority_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Priority_Dialog)
    {
        Priority_Dialog->setWindowTitle(QApplication::translate("Priority_Dialog", "Dialog", nullptr));
        checkBox->setText(QApplication::translate("Priority_Dialog", "Preemptive", nullptr));
        pushButton_addProcess->setText(QApplication::translate("Priority_Dialog", "Add Process", nullptr));
        pushButton_Go->setText(QApplication::translate("Priority_Dialog", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Priority_Dialog: public Ui_Priority_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIORITY_DIALOG_H
