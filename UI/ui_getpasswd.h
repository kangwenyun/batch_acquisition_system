/********************************************************************************
** Form generated from reading UI file 'getpasswd.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPASSWD_H
#define UI_GETPASSWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetPasswd
{
public:
    QLabel *getPasswd_label;
    QLineEdit *verification_edit;
    QPushButton *pushButton;
    QLabel *error_label;

    void setupUi(QWidget *GetPasswd)
    {
        if (GetPasswd->objectName().isEmpty())
            GetPasswd->setObjectName(QStringLiteral("GetPasswd"));
        GetPasswd->resize(400, 300);
        getPasswd_label = new QLabel(GetPasswd);
        getPasswd_label->setObjectName(QStringLiteral("getPasswd_label"));
        getPasswd_label->setGeometry(QRect(40, 30, 61, 21));
        verification_edit = new QLineEdit(GetPasswd);
        verification_edit->setObjectName(QStringLiteral("verification_edit"));
        verification_edit->setGeometry(QRect(90, 100, 210, 20));
        pushButton = new QPushButton(GetPasswd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(225, 190, 75, 23));
        QFont font;
        font.setPointSize(13);
        pushButton->setFont(font);
        error_label = new QLabel(GetPasswd);
        error_label->setObjectName(QStringLiteral("error_label"));
        error_label->setGeometry(QRect(90, 130, 71, 21));
        error_label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(GetPasswd);

        QMetaObject::connectSlotsByName(GetPasswd);
    } // setupUi

    void retranslateUi(QWidget *GetPasswd)
    {
        GetPasswd->setWindowTitle(QApplication::translate("GetPasswd", "Form", 0));
        getPasswd_label->setText(QApplication::translate("GetPasswd", "\345\257\206\347\240\201\346\211\276\345\233\236", 0));
        pushButton->setText(QApplication::translate("GetPasswd", "\347\241\256\345\256\232", 0));
        error_label->setText(QApplication::translate("GetPasswd", "\351\252\214\350\257\201\345\244\261\350\264\245", 0));
    } // retranslateUi

};

namespace Ui {
    class GetPasswd: public Ui_GetPasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPASSWD_H
