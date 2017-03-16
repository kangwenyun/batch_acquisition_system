/********************************************************************************
** Form generated from reading UI file 'registered.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERED_H
#define UI_REGISTERED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registered
{
public:
    QLabel *register_2;
    QLabel *userid_label;
    QLabel *username_label;
    QLabel *passwd_label;
    QLabel *passwd_again_label;
    QLabel *sex_label;
    QLabel *age_label;
    QLabel *userid_star;
    QLabel *job_lable;
    QLabel *passwd_star;
    QLabel *passwd_again_star;
    QLineEdit *userid;
    QLineEdit *username;
    QLineEdit *passwd;
    QLineEdit *passwd_again;
    QLineEdit *age;
    QLineEdit *job;
    QRadioButton *sex_man;
    QRadioButton *sex_women;
    QPushButton *ok_button;
    QLabel *err_label;
    QLabel *level_label;
    QLineEdit *level;
    QLabel *level_star;

    void setupUi(QWidget *Registered)
    {
        if (Registered->objectName().isEmpty())
            Registered->setObjectName(QStringLiteral("Registered"));
        Registered->resize(440, 400);
        QFont font;
        font.setPointSize(13);
        Registered->setFont(font);
        register_2 = new QLabel(Registered);
        register_2->setObjectName(QStringLiteral("register_2"));
        register_2->setGeometry(QRect(40, 10, 35, 15));
        QFont font1;
        font1.setPointSize(9);
        register_2->setFont(font1);
        userid_label = new QLabel(Registered);
        userid_label->setObjectName(QStringLiteral("userid_label"));
        userid_label->setGeometry(QRect(80, 46, 85, 20));
        userid_label->setFont(font);
        username_label = new QLabel(Registered);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setGeometry(QRect(80, 86, 85, 20));
        username_label->setFont(font);
        passwd_label = new QLabel(Registered);
        passwd_label->setObjectName(QStringLiteral("passwd_label"));
        passwd_label->setGeometry(QRect(80, 126, 85, 20));
        passwd_label->setFont(font);
        passwd_again_label = new QLabel(Registered);
        passwd_again_label->setObjectName(QStringLiteral("passwd_again_label"));
        passwd_again_label->setGeometry(QRect(80, 163, 85, 20));
        passwd_again_label->setFont(font);
        sex_label = new QLabel(Registered);
        sex_label->setObjectName(QStringLiteral("sex_label"));
        sex_label->setGeometry(QRect(80, 200, 85, 20));
        sex_label->setFont(font);
        age_label = new QLabel(Registered);
        age_label->setObjectName(QStringLiteral("age_label"));
        age_label->setGeometry(QRect(80, 237, 85, 20));
        age_label->setFont(font);
        userid_star = new QLabel(Registered);
        userid_star->setObjectName(QStringLiteral("userid_star"));
        userid_star->setGeometry(QRect(70, 46, 8, 16));
        userid_star->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        job_lable = new QLabel(Registered);
        job_lable->setObjectName(QStringLiteral("job_lable"));
        job_lable->setGeometry(QRect(80, 274, 85, 20));
        job_lable->setFont(font);
        passwd_star = new QLabel(Registered);
        passwd_star->setObjectName(QStringLiteral("passwd_star"));
        passwd_star->setGeometry(QRect(70, 126, 8, 16));
        passwd_star->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        passwd_again_star = new QLabel(Registered);
        passwd_again_star->setObjectName(QStringLiteral("passwd_again_star"));
        passwd_again_star->setGeometry(QRect(70, 163, 8, 16));
        passwd_again_star->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        userid = new QLineEdit(Registered);
        userid->setObjectName(QStringLiteral("userid"));
        userid->setGeometry(QRect(160, 40, 197, 32));
        username = new QLineEdit(Registered);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(160, 80, 197, 32));
        passwd = new QLineEdit(Registered);
        passwd->setObjectName(QStringLiteral("passwd"));
        passwd->setGeometry(QRect(160, 120, 197, 32));
        passwd_again = new QLineEdit(Registered);
        passwd_again->setObjectName(QStringLiteral("passwd_again"));
        passwd_again->setGeometry(QRect(160, 157, 197, 32));
        age = new QLineEdit(Registered);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(160, 231, 197, 32));
        job = new QLineEdit(Registered);
        job->setObjectName(QStringLiteral("job"));
        job->setGeometry(QRect(160, 268, 197, 32));
        sex_man = new QRadioButton(Registered);
        sex_man->setObjectName(QStringLiteral("sex_man"));
        sex_man->setGeometry(QRect(160, 202, 41, 16));
        sex_man->setFont(font);
        sex_women = new QRadioButton(Registered);
        sex_women->setObjectName(QStringLiteral("sex_women"));
        sex_women->setGeometry(QRect(230, 202, 41, 16));
        ok_button = new QPushButton(Registered);
        ok_button->setObjectName(QStringLiteral("ok_button"));
        ok_button->setGeometry(QRect(79, 365, 277, 27));
        err_label = new QLabel(Registered);
        err_label->setObjectName(QStringLiteral("err_label"));
        err_label->setGeometry(QRect(160, 340, 81, 15));
        err_label->setFont(font1);
        err_label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        level_label = new QLabel(Registered);
        level_label->setObjectName(QStringLiteral("level_label"));
        level_label->setGeometry(QRect(80, 311, 85, 20));
        level = new QLineEdit(Registered);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(160, 306, 197, 32));
        level_star = new QLabel(Registered);
        level_star->setObjectName(QStringLiteral("level_star"));
        level_star->setGeometry(QRect(70, 311, 8, 16));
        level_star->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(Registered);

        QMetaObject::connectSlotsByName(Registered);
    } // setupUi

    void retranslateUi(QWidget *Registered)
    {
        Registered->setWindowTitle(QApplication::translate("Registered", "Form", 0));
        register_2->setText(QApplication::translate("Registered", "\346\263\250\345\206\214", 0));
        userid_label->setText(QApplication::translate("Registered", "\350\264\246\345\217\267\357\274\232", 0));
        username_label->setText(QApplication::translate("Registered", "\345\220\215\345\255\227\357\274\232", 0));
        passwd_label->setText(QApplication::translate("Registered", "\345\257\206\347\240\201\357\274\232", 0));
        passwd_again_label->setText(QApplication::translate("Registered", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0));
        sex_label->setText(QApplication::translate("Registered", "\346\200\247\345\210\253\357\274\232", 0));
        age_label->setText(QApplication::translate("Registered", "\345\271\264\351\276\204\357\274\232", 0));
        userid_star->setText(QApplication::translate("Registered", "*", 0));
        job_lable->setText(QApplication::translate("Registered", "\345\267\245\344\275\234\357\274\232", 0));
        passwd_star->setText(QApplication::translate("Registered", "*", 0));
        passwd_again_star->setText(QApplication::translate("Registered", "*", 0));
        sex_man->setText(QApplication::translate("Registered", "\347\224\267", 0));
        sex_women->setText(QApplication::translate("Registered", "\345\245\263", 0));
        ok_button->setText(QApplication::translate("Registered", "\347\241\256\345\256\232", 0));
        err_label->setText(QApplication::translate("Registered", "\350\257\267\345\260\206\345\270\246*\351\241\271\345\241\253\346\273\241\357\274\201", 0));
        level_label->setText(QApplication::translate("Registered", "\346\235\203\351\231\220\357\274\232", 0));
        level_star->setText(QApplication::translate("Registered", "*", 0));
    } // retranslateUi

};

namespace Ui {
    class Registered: public Ui_Registered {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERED_H
