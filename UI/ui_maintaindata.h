/********************************************************************************
** Form generated from reading UI file 'maintaindata.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTAINDATA_H
#define UI_MAINTAINDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintainData
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *data_refresh;
    QPushButton *data_change;
    QPushButton *data_add;
    QPushButton *data_delete;
    QPushButton *data_deleteAll;
    QDateEdit *dateEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MaintainData)
    {
        if (MaintainData->objectName().isEmpty())
            MaintainData->setObjectName(QStringLiteral("MaintainData"));
        MaintainData->resize(800, 425);
        MaintainData->setMinimumSize(QSize(800, 0));
        horizontalLayout = new QHBoxLayout(MaintainData);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableWidget = new QTableWidget(MaintainData);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem14);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(tableWidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        data_refresh = new QPushButton(MaintainData);
        data_refresh->setObjectName(QStringLiteral("data_refresh"));

        verticalLayout_3->addWidget(data_refresh);

        data_change = new QPushButton(MaintainData);
        data_change->setObjectName(QStringLiteral("data_change"));

        verticalLayout_3->addWidget(data_change);

        data_add = new QPushButton(MaintainData);
        data_add->setObjectName(QStringLiteral("data_add"));

        verticalLayout_3->addWidget(data_add);

        data_delete = new QPushButton(MaintainData);
        data_delete->setObjectName(QStringLiteral("data_delete"));

        verticalLayout_3->addWidget(data_delete);

        data_deleteAll = new QPushButton(MaintainData);
        data_deleteAll->setObjectName(QStringLiteral("data_deleteAll"));

        verticalLayout_3->addWidget(data_deleteAll);

        dateEdit = new QDateEdit(MaintainData);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        verticalLayout_3->addWidget(dateEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_3);

        tableWidget->raise();
        data_deleteAll->raise();

        retranslateUi(MaintainData);

        QMetaObject::connectSlotsByName(MaintainData);
    } // setupUi

    void retranslateUi(QWidget *MaintainData)
    {
        MaintainData->setWindowTitle(QApplication::translate("MaintainData", "\350\264\247\347\211\251\346\225\260\346\215\256\347\273\264\346\212\244", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MaintainData", "\346\211\271\346\254\241\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MaintainData", "\346\211\230\347\233\230\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MaintainData", "\350\264\247\347\211\251\345\217\267", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MaintainData", "\350\264\247\347\211\251\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MaintainData", "\345\275\225\345\205\245\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MaintainData", "\345\244\207\346\263\250", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MaintainData", "1", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MaintainData", "2", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MaintainData", "3", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MaintainData", "4", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        data_refresh->setText(QApplication::translate("MaintainData", "\345\210\267\346\226\260", 0));
        data_change->setText(QApplication::translate("MaintainData", "\344\277\256\346\224\271", 0));
        data_add->setText(QApplication::translate("MaintainData", "\345\242\236\345\212\240", 0));
        data_delete->setText(QApplication::translate("MaintainData", "\345\210\240\351\231\244", 0));
        data_deleteAll->setText(QApplication::translate("MaintainData", "\345\210\240\351\231\244\346\211\200\346\234\211", 0));
        dateEdit->setDisplayFormat(QApplication::translate("MaintainData", "yyyy/MM/dd", 0));
    } // retranslateUi

};

namespace Ui {
    class MaintainData: public Ui_MaintainData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTAINDATA_H
