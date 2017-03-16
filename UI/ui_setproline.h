/********************************************************************************
** Form generated from reading UI file 'setproline.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPROLINE_H
#define UI_SETPROLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetProLine
{
public:
    QLabel *label;

    void setupUi(QWidget *SetProLine)
    {
        if (SetProLine->objectName().isEmpty())
            SetProLine->setObjectName(QStringLiteral("SetProLine"));
        SetProLine->resize(400, 300);
        label = new QLabel(SetProLine);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 85, 12));

        retranslateUi(SetProLine);

        QMetaObject::connectSlotsByName(SetProLine);
    } // setupUi

    void retranslateUi(QWidget *SetProLine)
    {
        SetProLine->setWindowTitle(QApplication::translate("SetProLine", "Form", 0));
        label->setText(QApplication::translate("SetProLine", "\347\224\237\344\272\247\347\272\277\344\277\241\346\201\257\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class SetProLine: public Ui_SetProLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPROLINE_H
