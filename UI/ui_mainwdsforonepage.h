/********************************************************************************
** Form generated from reading UI file 'mainwdsforonepage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWDSFORONEPAGE_H
#define UI_MAINWDSFORONEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwdsforonepage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *mainwdsforonepage)
    {
        if (mainwdsforonepage->objectName().isEmpty())
            mainwdsforonepage->setObjectName(QStringLiteral("mainwdsforonepage"));
        mainwdsforonepage->resize(535, 417);
        verticalLayout = new QVBoxLayout(mainwdsforonepage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(mainwdsforonepage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(mainwdsforonepage);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(mainwdsforonepage);
    } // setupUi

    void retranslateUi(QWidget *mainwdsforonepage)
    {
        mainwdsforonepage->setWindowTitle(QApplication::translate("mainwdsforonepage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwdsforonepage: public Ui_mainwdsforonepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWDSFORONEPAGE_H
