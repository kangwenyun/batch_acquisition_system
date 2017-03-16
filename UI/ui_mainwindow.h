/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *person_info;
    QMenu *log;
    QMenu *batch_info;
    QMenu *authority;
    QMenu *proLine_info;
    QMenu *data;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 530);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 31));
        person_info = new QMenu(menubar);
        person_info->setObjectName(QStringLiteral("person_info"));
        log = new QMenu(menubar);
        log->setObjectName(QStringLiteral("log"));
        batch_info = new QMenu(menubar);
        batch_info->setObjectName(QStringLiteral("batch_info"));
        authority = new QMenu(menubar);
        authority->setObjectName(QStringLiteral("authority"));
        proLine_info = new QMenu(menubar);
        proLine_info->setObjectName(QStringLiteral("proLine_info"));
        data = new QMenu(menubar);
        data->setObjectName(QStringLiteral("data"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(person_info->menuAction());
        menubar->addAction(log->menuAction());
        menubar->addAction(batch_info->menuAction());
        menubar->addAction(authority->menuAction());
        menubar->addAction(proLine_info->menuAction());
        menubar->addAction(data->menuAction());
        person_info->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        person_info->setTitle(QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        log->setTitle(QApplication::translate("MainWindow", "\346\227\245\345\277\227\347\256\241\347\220\206", 0));
        batch_info->setTitle(QApplication::translate("MainWindow", "\346\211\271\346\254\241\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        authority->setTitle(QApplication::translate("MainWindow", "\346\235\203\351\231\220\347\256\241\347\220\206", 0));
        proLine_info->setTitle(QApplication::translate("MainWindow", "\347\224\237\344\272\247\347\272\277\344\277\241\346\201\257\347\256\241\347\220\206", 0));
        data->setTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
