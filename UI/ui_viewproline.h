/********************************************************************************
** Form generated from reading UI file 'viewproline.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPROLINE_H
#define UI_VIEWPROLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewProLine
{
public:
    QLabel *label;

    void setupUi(QWidget *ViewProLine)
    {
        if (ViewProLine->objectName().isEmpty())
            ViewProLine->setObjectName(QStringLiteral("ViewProLine"));
        ViewProLine->resize(400, 300);
        label = new QLabel(ViewProLine);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 65, 12));

        retranslateUi(ViewProLine);

        QMetaObject::connectSlotsByName(ViewProLine);
    } // setupUi

    void retranslateUi(QWidget *ViewProLine)
    {
        ViewProLine->setWindowTitle(QApplication::translate("ViewProLine", "Form", 0));
        label->setText(QApplication::translate("ViewProLine", "\347\224\237\344\272\247\347\272\277\344\277\241\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewProLine: public Ui_ViewProLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPROLINE_H
