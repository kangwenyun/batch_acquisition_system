/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QLabel *login_label;
    QPushButton *login;
    QPushButton *registered;
    QPushButton *get_passwd;
    QLabel *err_label;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *userId;
    QLineEdit *passwd;
    QLabel *label_2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(400, 300);
        login_label = new QLabel(Login);
        login_label->setObjectName(QStringLiteral("login_label"));
        login_label->setGeometry(QRect(40, 30, 30, 15));
        QFont font;
        font.setPointSize(9);
        login_label->setFont(font);
        login = new QPushButton(Login);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(83, 170, 231, 27));
        QFont font1;
        font1.setPointSize(13);
        login->setFont(font1);
        registered = new QPushButton(Login);
        registered->setObjectName(QStringLiteral("registered"));
        registered->setGeometry(QRect(225, 195, 29, 23));
        registered->setFont(font);
        registered->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        get_passwd = new QPushButton(Login);
        get_passwd->setObjectName(QStringLiteral("get_passwd"));
        get_passwd->setGeometry(QRect(256, 195, 64, 23));
        get_passwd->setFont(font);
        get_passwd->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        err_label = new QLabel(Login);
        err_label->setObjectName(QStringLiteral("err_label"));
        err_label->setGeometry(QRect(115, 143, 171, 16));
        err_label->setFont(font);
        err_label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(254, 199, 1, 16));
        label->setStyleSheet(QLatin1String("background-color: rgb(207, 207, 207);\n"
"color: rgb(207, 207, 207);"));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(83, 70, 231, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userId = new QLineEdit(layoutWidget);
        userId->setObjectName(QStringLiteral("userId"));
        userId->setMinimumSize(QSize(0, 20));
        userId->setFont(font1);

        verticalLayout->addWidget(userId);

        passwd = new QLineEdit(layoutWidget);
        passwd->setObjectName(QStringLiteral("passwd"));
        passwd->setFont(font1);

        verticalLayout->addWidget(passwd);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 401, 301));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/images/11.jpg);"));
        label_2->raise();
        login_label->raise();
        login->raise();
        registered->raise();
        get_passwd->raise();
        err_label->raise();
        layoutWidget->raise();
        label->raise();

        retranslateUi(Login);

        registered->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Widget", 0));
        login_label->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0));
        login->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0));
        registered->setText(QApplication::translate("Login", "\346\263\250\345\206\214", 0));
        get_passwd->setText(QApplication::translate("Login", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", 0));
        err_label->setText(QApplication::translate("Login", "\350\264\246\345\217\267/\345\257\206\347\240\201\344\270\215\350\203\275\344\270\272\347\251\272\357\274\201", 0));
        label->setText(QApplication::translate("Login", "TextLabel", 0));
        userId->setPlaceholderText(QApplication::translate("Login", "\347\231\273\345\275\225\350\264\246\345\217\267", 0));
        passwd->setPlaceholderText(QApplication::translate("Login", "\347\231\273\345\275\225\345\257\206\347\240\201", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
