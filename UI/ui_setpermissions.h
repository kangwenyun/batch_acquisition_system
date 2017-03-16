/********************************************************************************
** Form generated from reading UI file 'setpermissions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPERMISSIONS_H
#define UI_SETPERMISSIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetPermissions
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh_button;
    QPushButton *change_button;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SetPermissions)
    {
        if (SetPermissions->objectName().isEmpty())
            SetPermissions->setObjectName(QStringLiteral("SetPermissions"));
        SetPermissions->resize(400, 300);
        SetPermissions->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(SetPermissions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refresh_button = new QPushButton(SetPermissions);
        refresh_button->setObjectName(QStringLiteral("refresh_button"));

        horizontalLayout->addWidget(refresh_button);

        change_button = new QPushButton(SetPermissions);
        change_button->setObjectName(QStringLiteral("change_button"));

        horizontalLayout->addWidget(change_button);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(SetPermissions);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(SetPermissions);

        QMetaObject::connectSlotsByName(SetPermissions);
    } // setupUi

    void retranslateUi(QWidget *SetPermissions)
    {
        SetPermissions->setWindowTitle(QApplication::translate("SetPermissions", "Form", 0));
        refresh_button->setText(QApplication::translate("SetPermissions", "\345\210\267\346\226\260", 0));
        change_button->setText(QApplication::translate("SetPermissions", "\344\277\256\346\224\271", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SetPermissions", "\350\264\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SetPermissions", "\350\264\246\345\217\267\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SetPermissions", "\346\235\203\351\231\220\347\255\211\347\272\247", 0));
    } // retranslateUi

};

namespace Ui {
    class SetPermissions: public Ui_SetPermissions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPERMISSIONS_H
