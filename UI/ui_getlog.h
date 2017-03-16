/********************************************************************************
** Form generated from reading UI file 'getlog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETLOG_H
#define UI_GETLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetLog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDateTimeEdit *dateEdit;
    QTableWidget *tableWidget;

    void setupUi(QWidget *GetLog)
    {
        if (GetLog->objectName().isEmpty())
            GetLog->setObjectName(QStringLiteral("GetLog"));
        GetLog->resize(800, 530);
        GetLog->setMinimumSize(QSize(500, 0));
        verticalLayout = new QVBoxLayout(GetLog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dateEdit = new QDateTimeEdit(GetLog);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setContextMenuPolicy(Qt::NoContextMenu);
        dateEdit->setLayoutDirection(Qt::LeftToRight);
        dateEdit->setAutoFillBackground(false);
        dateEdit->setWrapping(false);
        dateEdit->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        dateEdit->setKeyboardTracking(false);
        dateEdit->setMaximumTime(QTime(23, 59, 59));

        horizontalLayout->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(GetLog);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFocusPolicy(Qt::TabFocus);
        tableWidget->setContextMenuPolicy(Qt::NoContextMenu);
        tableWidget->setAcceptDrops(false);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(GetLog);

        QMetaObject::connectSlotsByName(GetLog);
    } // setupUi

    void retranslateUi(QWidget *GetLog)
    {
        GetLog->setWindowTitle(QApplication::translate("GetLog", "\346\227\245\345\277\227\346\237\245\347\234\213", 0));
        dateEdit->setDisplayFormat(QApplication::translate("GetLog", "yyyy/MM/dd", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GetLog", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GetLog", "\350\264\246\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GetLog", "\346\223\215\344\275\234", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("GetLog", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class GetLog: public Ui_GetLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETLOG_H
