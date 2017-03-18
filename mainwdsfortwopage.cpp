#include "mainwdsfortwopage.h"
#include "ui_mainwdsfortwopage.h"
#include "setpermissions.h"
#include "getlog.h"
#include "session.h"
#include "qres.h"
#include "dbhelper.h"
#include <QDebug>
mainwdsfortwopage::mainwdsfortwopage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsfortwopage)
{
    ui->setupUi(this);
    GetLog *gl=new GetLog();
    ui->tabWidget->insertTab(0,gl,"日志查看");

    Session *curper = Session::getInstance();
    QString userId = curper->getUserId();
    Qres res = dbhelper::getInstance()->QcheckPermisson(userId);
    if(res.success)
    {
        SetPermissions *sp=new SetPermissions();
        ui->tabWidget->insertTab(1,sp,"权限管理");
    }
}

mainwdsfortwopage::~mainwdsfortwopage()
{
    delete ui;
}
