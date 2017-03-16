/********************************************************************************
** Form generated from reading UI file 'mainwdsforthreepage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWDSFORTHREEPAGE_H
#define UI_MAINWDSFORTHREEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwdsforthreepage
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *mainwdsforthreepage)
    {
        if (mainwdsforthreepage->objectName().isEmpty())
            mainwdsforthreepage->setObjectName(QStringLiteral("mainwdsforthreepage"));
        mainwdsforthreepage->resize(400, 300);
        horizontalLayout = new QHBoxLayout(mainwdsforthreepage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(mainwdsforthreepage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(mainwdsforthreepage);

        QMetaObject::connectSlotsByName(mainwdsforthreepage);
    } // setupUi

    void retranslateUi(QWidget *mainwdsforthreepage)
    {
        mainwdsforthreepage->setWindowTitle(QApplication::translate("mainwdsforthreepage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwdsforthreepage: public Ui_mainwdsforthreepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWDSFORTHREEPAGE_H
