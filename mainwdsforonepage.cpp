#include "mainwdsforonepage.h"
#include "ui_mainwdsforonepage.h"
#include <registrationinfo.h>
#include <changepasswd.h>
mainwdsforonepage::mainwdsforonepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforonepage)
{
    ui->setupUi(this);

    RegistrationInfo * re =new RegistrationInfo();
    ui->tabWidget->insertTab(0,re,"个人信息");


    ChangePasswd * cp =new ChangePasswd();
    ui->tabWidget->insertTab(1,cp,"密码修改");
}

mainwdsforonepage::~mainwdsforonepage()
{
    delete ui;
}
