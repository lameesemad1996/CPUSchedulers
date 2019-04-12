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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RR_Dialog
{
public:
    QPushButton *pushButton_addProcess;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Go;

    void setupUi(QDialog *RR_Dialog)
    {
        if (RR_Dialog->objectName().isEmpty())
            RR_Dialog->setObjectName(QString::fromUtf8("RR_Dialog"));
        RR_Dialog->resize(921, 555);
        RR_Dialog->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 239, 255);"));
        pushButton_addProcess = new QPushButton(RR_Dialog);
        pushButton_addProcess->setObjectName(QString::fromUtf8("pushButton_addProcess"));
        pushButton_addProcess->setGeometry(QRect(10, 475, 896, 28));
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
        verticalLayoutWidget_2 = new QWidget(RR_Dialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 16, 896, 452));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Go = new QPushButton(RR_Dialog);
        pushButton_Go->setObjectName(QString::fromUtf8("pushButton_Go"));
        pushButton_Go->setGeometry(QRect(10, 520, 896, 28));
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

        retranslateUi(RR_Dialog);

        QMetaObject::connectSlotsByName(RR_Dialog);
    } // setupUi

    void retranslateUi(QDialog *RR_Dialog)
    {
        RR_Dialog->setWindowTitle(QApplication::translate("RR_Dialog", "Dialog", nullptr));
        pushButton_addProcess->setText(QApplication::translate("RR_Dialog", "Add Process", nullptr));
        pushButton_Go->setText(QApplication::translate("RR_Dialog", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RR_Dialog: public Ui_RR_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RR_DIALOG_H
