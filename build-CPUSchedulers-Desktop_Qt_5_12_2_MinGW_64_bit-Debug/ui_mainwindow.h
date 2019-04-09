/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_sjf;
    QPushButton *pushButton_rr;
    QPushButton *pushButton_priority;
    QPushButton *pushButton_fcfs;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(619, 322);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_sjf = new QPushButton(centralWidget);
        pushButton_sjf->setObjectName(QString::fromUtf8("pushButton_sjf"));
        pushButton_sjf->setGeometry(QRect(60, 170, 220, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift SemiLight SemiConde"));
        font.setPointSize(14);
        pushButton_sjf->setFont(font);
        pushButton_sjf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: 	rgb(243, 91, 4);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_rr = new QPushButton(centralWidget);
        pushButton_rr->setObjectName(QString::fromUtf8("pushButton_rr"));
        pushButton_rr->setGeometry(QRect(320, 80, 220, 60));
        pushButton_rr->setFont(font);
        pushButton_rr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: 	rgb(247, 184, 1);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_priority = new QPushButton(centralWidget);
        pushButton_priority->setObjectName(QString::fromUtf8("pushButton_priority"));
        pushButton_priority->setGeometry(QRect(320, 170, 220, 60));
        pushButton_priority->setFont(font);
        pushButton_priority->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: 	rgb(80, 68, 184);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_fcfs = new QPushButton(centralWidget);
        pushButton_fcfs->setObjectName(QString::fromUtf8("pushButton_fcfs"));
        pushButton_fcfs->setGeometry(QRect(60, 80, 220, 60));
        pushButton_fcfs->setFont(font);
        pushButton_fcfs->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"	background-color: 	rgb(118, 120, 237);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_sjf->setText(QApplication::translate("MainWindow", "Shortest Job First", nullptr));
        pushButton_rr->setText(QApplication::translate("MainWindow", "Round Robin", nullptr));
        pushButton_priority->setText(QApplication::translate("MainWindow", "Priority", nullptr));
        pushButton_fcfs->setText(QApplication::translate("MainWindow", "First Come First Serve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
