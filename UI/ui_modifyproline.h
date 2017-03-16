/********************************************************************************
** Form generated from reading UI file 'modifyproline.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPROLINE_H
#define UI_MODIFYPROLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyProLine
{
public:
    QLabel *label;

    void setupUi(QWidget *ModifyProLine)
    {
        if (ModifyProLine->objectName().isEmpty())
            ModifyProLine->setObjectName(QStringLiteral("ModifyProLine"));
        ModifyProLine->resize(400, 300);
        label = new QLabel(ModifyProLine);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 91, 21));

        retranslateUi(ModifyProLine);

        QMetaObject::connectSlotsByName(ModifyProLine);
    } // setupUi

    void retranslateUi(QWidget *ModifyProLine)
    {
        ModifyProLine->setWindowTitle(QApplication::translate("ModifyProLine", "Form", 0));
        label->setText(QApplication::translate("ModifyProLine", "\347\224\237\344\272\247\347\272\277\344\277\241\346\201\257\344\277\256\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class ModifyProLine: public Ui_ModifyProLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPROLINE_H
