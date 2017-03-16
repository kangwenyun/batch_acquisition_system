/********************************************************************************
** Form generated from reading UI file 'viewbatch.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWBATCH_H
#define UI_VIEWBATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewBatch
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh_batch;
    QPushButton *add_batch;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *ViewBatch)
    {
        if (ViewBatch->objectName().isEmpty())
            ViewBatch->setObjectName(QStringLiteral("ViewBatch"));
        ViewBatch->resize(500, 500);
        ViewBatch->setMinimumSize(QSize(500, 0));
        ViewBatch->setMaximumSize(QSize(3000, 3000));
        verticalLayout_2 = new QVBoxLayout(ViewBatch);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        refresh_batch = new QPushButton(ViewBatch);
        refresh_batch->setObjectName(QStringLiteral("refresh_batch"));

        horizontalLayout->addWidget(refresh_batch);

        add_batch = new QPushButton(ViewBatch);
        add_batch->setObjectName(QStringLiteral("add_batch"));

        horizontalLayout->addWidget(add_batch);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(ViewBatch);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(300, 200));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        treeWidget = new QTreeWidget(ViewBatch);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 200));
        treeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidget->header()->setVisible(false);

        verticalLayout->addWidget(treeWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ViewBatch);

        QMetaObject::connectSlotsByName(ViewBatch);
    } // setupUi

    void retranslateUi(QWidget *ViewBatch)
    {
        ViewBatch->setWindowTitle(QApplication::translate("ViewBatch", "\346\211\271\346\254\241\344\277\241\346\201\257\346\237\245\347\234\213", 0));
        refresh_batch->setText(QApplication::translate("ViewBatch", "\345\210\267\346\226\260", 0));
        add_batch->setText(QApplication::translate("ViewBatch", "\345\242\236\345\212\240", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ViewBatch", "\346\211\271\346\254\241ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ViewBatch", "\350\264\247\347\211\251\346\200\273\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ViewBatch", "\346\211\271\346\254\241\345\267\262\346\234\211\346\225\260", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewBatch: public Ui_ViewBatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWBATCH_H
