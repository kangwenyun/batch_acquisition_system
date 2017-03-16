/********************************************************************************
** Form generated from reading UI file 'authentication.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATION_H
#define UI_AUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authentication
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Authentication)
    {
        if (Authentication->objectName().isEmpty())
            Authentication->setObjectName(QStringLiteral("Authentication"));
        Authentication->resize(400, 300);
        label = new QLabel(Authentication);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 54, 15));
        pushButton = new QPushButton(Authentication);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 100, 99, 27));

        retranslateUi(Authentication);

        QMetaObject::connectSlotsByName(Authentication);
    } // setupUi

    void retranslateUi(QWidget *Authentication)
    {
        Authentication->setWindowTitle(QApplication::translate("Authentication", "\350\272\253\344\273\275\350\256\244\350\257\201", 0));
        label->setText(QApplication::translate("Authentication", "\350\272\253\344\273\275\350\256\244\350\257\201", 0));
        pushButton->setText(QApplication::translate("Authentication", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Authentication: public Ui_Authentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATION_H
