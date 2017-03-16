#include "mainwdsforonepage.h"
#include "ui_mainwdsforonepage.h"
#include <registrationinfo.h>
#include <changepasswd.h>
#include <QFile>
mainwdsforonepage::mainwdsforonepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforonepage)
{
    ui->setupUi(this);
//    QFile styleSheet(":/qss/myStyle.qss");
//    if (!styleSheet.open(QIODevice::ReadOnly))
//    {
//        qWarning("Can't open the style sheet file.");
//        return;
//    }
//    qApp->setStyleSheet(styleSheet.readAll());

    RegistrationInfo * re =new RegistrationInfo();
    ui->tabWidget->insertTab(0,re,"个人信息");


    ChangePasswd * cp =new ChangePasswd();
    ui->tabWidget->insertTab(1,cp,"密码修改");
}

mainwdsforonepage::~mainwdsforonepage()
{
    delete ui;
}
