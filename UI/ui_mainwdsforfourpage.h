/********************************************************************************
** Form generated from reading UI file 'mainwdsforfourpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWDSFORFOURPAGE_H
#define UI_MAINWDSFORFOURPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwdsforfourpage
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *mainwdsforfourpage)
    {
        if (mainwdsforfourpage->objectName().isEmpty())
            mainwdsforfourpage->setObjectName(QStringLiteral("mainwdsforfourpage"));
        mainwdsforfourpage->resize(400, 300);
        horizontalLayout = new QHBoxLayout(mainwdsforfourpage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(mainwdsforfourpage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(mainwdsforfourpage);

        QMetaObject::connectSlotsByName(mainwdsforfourpage);
    } // setupUi

    void retranslateUi(QWidget *mainwdsforfourpage)
    {
        mainwdsforfourpage->setWindowTitle(QApplication::translate("mainwdsforfourpage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwdsforfourpage: public Ui_mainwdsforfourpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWDSFORFOURPAGE_H
