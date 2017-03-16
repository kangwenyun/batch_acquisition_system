/********************************************************************************
** Form generated from reading UI file 'mainwdsforfivepage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWDSFORFIVEPAGE_H
#define UI_MAINWDSFORFIVEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwdsforfivepage
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *mainwdsforfivepage)
    {
        if (mainwdsforfivepage->objectName().isEmpty())
            mainwdsforfivepage->setObjectName(QStringLiteral("mainwdsforfivepage"));
        mainwdsforfivepage->resize(400, 300);
        horizontalLayout = new QHBoxLayout(mainwdsforfivepage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(mainwdsforfivepage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(mainwdsforfivepage);

        QMetaObject::connectSlotsByName(mainwdsforfivepage);
    } // setupUi

    void retranslateUi(QWidget *mainwdsforfivepage)
    {
        mainwdsforfivepage->setWindowTitle(QApplication::translate("mainwdsforfivepage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwdsforfivepage: public Ui_mainwdsforfivepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWDSFORFIVEPAGE_H
