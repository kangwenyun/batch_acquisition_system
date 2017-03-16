/********************************************************************************
** Form generated from reading UI file 'mainwdsfortwopage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWDSFORTWOPAGE_H
#define UI_MAINWDSFORTWOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwdsfortwopage
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *mainwdsfortwopage)
    {
        if (mainwdsfortwopage->objectName().isEmpty())
            mainwdsfortwopage->setObjectName(QStringLiteral("mainwdsfortwopage"));
        mainwdsfortwopage->resize(400, 300);
        horizontalLayout = new QHBoxLayout(mainwdsfortwopage);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(mainwdsfortwopage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(mainwdsfortwopage);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(mainwdsfortwopage);
    } // setupUi

    void retranslateUi(QWidget *mainwdsfortwopage)
    {
        mainwdsfortwopage->setWindowTitle(QApplication::translate("mainwdsfortwopage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwdsfortwopage: public Ui_mainwdsfortwopage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWDSFORTWOPAGE_H
