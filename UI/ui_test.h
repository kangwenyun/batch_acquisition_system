/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QTabWidget *tabWidget;

    void setupUi(QDialog *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QStringLiteral("test"));
        test->resize(701, 587);
        tabWidget = new QTabWidget(test);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 701, 591));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(90, 90));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);

        retranslateUi(test);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QDialog *test)
    {
        test->setWindowTitle(QApplication::translate("test", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
