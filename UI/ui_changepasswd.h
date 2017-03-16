/********************************************************************************
** Form generated from reading UI file 'changepasswd.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWD_H
#define UI_CHANGEPASSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangePasswd
{
public:
    QLabel *label;
    QLabel *err_label;
    QPushButton *ok_button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *userId_edit;
    QLineEdit *oldKey_edit;
    QLineEdit *newKey_edit;
    QLineEdit *newKeyAgain_edit;

    void setupUi(QWidget *ChangePasswd)
    {
        if (ChangePasswd->objectName().isEmpty())
            ChangePasswd->setObjectName(QStringLiteral("ChangePasswd"));
        ChangePasswd->resize(400, 400);
        label = new QLabel(ChangePasswd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 81, 21));
        err_label = new QLabel(ChangePasswd);
        err_label->setObjectName(QStringLiteral("err_label"));
        err_label->setGeometry(QRect(190, 223, 160, 12));
        QFont font;
        font.setPointSize(9);
        err_label->setFont(font);
        err_label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        ok_button = new QPushButton(ChangePasswd);
        ok_button->setObjectName(QStringLiteral("ok_button"));
        ok_button->setGeometry(QRect(74, 270, 271, 27));
        QFont font1;
        font1.setPointSize(13);
        ok_button->setFont(font1);
        layoutWidget = new QWidget(ChangePasswd);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(75, 81, 271, 136));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userId_edit = new QLineEdit(layoutWidget);
        userId_edit->setObjectName(QStringLiteral("userId_edit"));
        userId_edit->setFont(font1);

        verticalLayout_2->addWidget(userId_edit);

        oldKey_edit = new QLineEdit(layoutWidget);
        oldKey_edit->setObjectName(QStringLiteral("oldKey_edit"));
        oldKey_edit->setFont(font1);

        verticalLayout_2->addWidget(oldKey_edit);

        newKey_edit = new QLineEdit(layoutWidget);
        newKey_edit->setObjectName(QStringLiteral("newKey_edit"));
        newKey_edit->setFont(font1);

        verticalLayout_2->addWidget(newKey_edit);

        newKeyAgain_edit = new QLineEdit(layoutWidget);
        newKeyAgain_edit->setObjectName(QStringLiteral("newKeyAgain_edit"));
        newKeyAgain_edit->setFont(font1);

        verticalLayout_2->addWidget(newKeyAgain_edit);


        retranslateUi(ChangePasswd);

        QMetaObject::connectSlotsByName(ChangePasswd);
    } // setupUi

    void retranslateUi(QWidget *ChangePasswd)
    {
        ChangePasswd->setWindowTitle(QApplication::translate("ChangePasswd", "\345\257\206\347\240\201\344\277\256\346\224\271", 0));
        label->setText(QApplication::translate("ChangePasswd", "\345\257\206\347\240\201\344\277\256\346\224\271", 0));
        err_label->setText(QApplication::translate("ChangePasswd", "\345\216\237\345\257\206\347\240\201\351\224\231\350\257\257\357\274\201", 0));
        ok_button->setText(QApplication::translate("ChangePasswd", "\347\241\256\345\256\232", 0));
        oldKey_edit->setPlaceholderText(QApplication::translate("ChangePasswd", "\350\257\267\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201", 0));
        newKey_edit->setPlaceholderText(QApplication::translate("ChangePasswd", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", 0));
        newKeyAgain_edit->setPlaceholderText(QApplication::translate("ChangePasswd", "\350\257\267\345\206\215\350\276\223\345\205\245\344\270\200\351\201\215\346\226\260\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePasswd: public Ui_ChangePasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWD_H
