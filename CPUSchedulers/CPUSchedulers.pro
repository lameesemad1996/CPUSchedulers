#-------------------------------------------------
#
# Project created by QtCreator 2019-04-09T20:16:46
#
#-------------------------------------------------

QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CPUSchedulers
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    sjf_dialog.cpp \
    priority_dialog.cpp \
    rr_dialog.cpp \
    fcfs_dialog.cpp \
    fcfs_op_dialog.cpp \
    rr_op_dialog.cpp \
    sjf_op_dialog.cpp \
    priority_op_dialog.cpp \
    fcfs.cpp \
    roundrobin.cpp \
    priority.cpp \
    sjf.cpp

HEADERS += \
        mainwindow.h \
    sjf_dialog.h \
    priority_dialog.h \
    rr_dialog.h \
    fcfs_dialog.h \
    fcfs_op_dialog.h \
    rr_op_dialog.h \
    sjf_op_dialog.h \
    priority_op_dialog.h \
    fcfs.h \
    roundrobin.h \
    priority.h \
    sjf.h

FORMS += \
        mainwindow.ui \
    sjf_dialog.ui \
    priority_dialog.ui \
    rr_dialog.ui \
    fcfs_dialog.ui \
    fcfs_op_dialog.ui \
    rr_op_dialog.ui \
    sjf_op_dialog.ui \
    priority_op_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
