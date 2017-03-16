/********************************************************************************
** Form generated from reading UI file 'registrationinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONINFO_H
#define UI_REGISTRATIONINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationInfo
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *userid_label;
    QLineEdit *userid_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *username_label;
    QLineEdit *username_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *sex_label;
    QLineEdit *sex_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *age_label;
    QLineEdit *age_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *job_label;
    QLineEdit *job_edit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *level_label;
    QLineEdit *level_edit;
    QPushButton *edit_ok_button;
    QLabel *info_label;

    void setupUi(QWidget *RegistrationInfo)
    {
        if (RegistrationInfo->objectName().isEmpty())
            RegistrationInfo->setObjectName(QStringLiteral("RegistrationInfo"));
        RegistrationInfo->resize(400, 345);
        RegistrationInfo->setMinimumSize(QSize(400, 0));
        RegistrationInfo->setMaximumSize(QSize(1000, 1000));
        layoutWidget = new QWidget(RegistrationInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 20, 258, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        userid_label = new QLabel(layoutWidget);
        userid_label->setObjectName(QStringLiteral("userid_label"));
        QFont font;
        font.setPointSize(13);
        userid_label->setFont(font);

        horizontalLayout->addWidget(userid_label);

        userid_edit = new QLineEdit(layoutWidget);
        userid_edit->setObjectName(QStringLiteral("userid_edit"));
        userid_edit->setFont(font);
        userid_edit->setStyleSheet(QStringLiteral("border-color: rgba(255, 255, 255, 0);"));

        horizontalLayout->addWidget(userid_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        username_label = new QLabel(layoutWidget);
        username_label->setObjectName(QStringLiteral("username_label"));
        username_label->setFont(font);

        horizontalLayout_2->addWidget(username_label);

        username_edit = new QLineEdit(layoutWidget);
        username_edit->setObjectName(QStringLiteral("username_edit"));
        username_edit->setFont(font);

        horizontalLayout_2->addWidget(username_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        sex_label = new QLabel(layoutWidget);
        sex_label->setObjectName(QStringLiteral("sex_label"));
        sex_label->setFont(font);

        horizontalLayout_3->addWidget(sex_label);

        sex_edit = new QLineEdit(layoutWidget);
        sex_edit->setObjectName(QStringLiteral("sex_edit"));
        sex_edit->setFont(font);

        horizontalLayout_3->addWidget(sex_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        age_label = new QLabel(layoutWidget);
        age_label->setObjectName(QStringLiteral("age_label"));
        age_label->setFont(font);

        horizontalLayout_4->addWidget(age_label);

        age_edit = new QLineEdit(layoutWidget);
        age_edit->setObjectName(QStringLiteral("age_edit"));
        age_edit->setFont(font);

        horizontalLayout_4->addWidget(age_edit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        job_label = new QLabel(layoutWidget);
        job_label->setObjectName(QStringLiteral("job_label"));
        job_label->setFont(font);

        horizontalLayout_5->addWidget(job_label);

        job_edit = new QLineEdit(layoutWidget);
        job_edit->setObjectName(QStringLiteral("job_edit"));
        job_edit->setFont(font);

        horizontalLayout_5->addWidget(job_edit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        level_label = new QLabel(layoutWidget);
        level_label->setObjectName(QStringLiteral("level_label"));
        level_label->setFont(font);

        horizontalLayout_7->addWidget(level_label);

        level_edit = new QLineEdit(layoutWidget);
        level_edit->setObjectName(QStringLiteral("level_edit"));
        level_edit->setFont(font);

        horizontalLayout_7->addWidget(level_edit);


        verticalLayout->addLayout(horizontalLayout_7);

        edit_ok_button = new QPushButton(RegistrationInfo);
        edit_ok_button->setObjectName(QStringLiteral("edit_ok_button"));
        edit_ok_button->setGeometry(QRect(70, 290, 256, 27));
        edit_ok_button->setFont(font);
        info_label = new QLabel(RegistrationInfo);
        info_label->setObjectName(QStringLiteral("info_label"));
        info_label->setGeometry(QRect(130, 255, 191, 17));
        QFont font1;
        font1.setPointSize(9);
        info_label->setFont(font1);
        info_label->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(RegistrationInfo);

        QMetaObject::connectSlotsByName(RegistrationInfo);
    } // setupUi

    void retranslateUi(QWidget *RegistrationInfo)
    {
        RegistrationInfo->setWindowTitle(QApplication::translate("RegistrationInfo", "\346\263\250\345\206\214\344\277\241\346\201\257\346\237\245\347\234\213", 0));
        userid_label->setText(QApplication::translate("RegistrationInfo", "\350\264\246\345\217\267\357\274\232", 0));
        username_label->setText(QApplication::translate("RegistrationInfo", "\345\220\215\345\255\227\357\274\232", 0));
        sex_label->setText(QApplication::translate("RegistrationInfo", "\346\200\247\345\210\253\357\274\232", 0));
        age_label->setText(QApplication::translate("RegistrationInfo", "\345\271\264\351\276\204\357\274\232", 0));
        job_label->setText(QApplication::translate("RegistrationInfo", "\345\267\245\344\275\234\357\274\232", 0));
        level_label->setText(QApplication::translate("RegistrationInfo", "\346\235\203\351\231\220\357\274\232", 0));
        edit_ok_button->setText(QApplication::translate("RegistrationInfo", "\347\274\226\350\276\221", 0));
        info_label->setText(QApplication::translate("RegistrationInfo", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class RegistrationInfo: public Ui_RegistrationInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONINFO_H
