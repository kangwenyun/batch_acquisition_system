#include "mainwdsfortwopage.h"
#include "ui_mainwdsfortwopage.h"
#include "setpermissions.h"
#include <getlog.h>
mainwdsfortwopage::mainwdsfortwopage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsfortwopage)
{
    ui->setupUi(this);
    GetLog *gl=new GetLog();
    ui->tabWidget->insertTab(0,gl,"日志查看");
    SetPermissions *sp=new SetPermissions();
    ui->tabWidget->insertTab(1,sp,"权限管理");

}

mainwdsfortwopage::~mainwdsfortwopage()
{
    delete ui;
}
