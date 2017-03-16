#include "mainwdsfortwopage.h"
#include "ui_mainwdsfortwopage.h"
#include "setpermissions.h"
#include <getlog.h>
#include <QFile>
mainwdsfortwopage::mainwdsfortwopage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsfortwopage)
{
    ui->setupUi(this);
    QFile styleSheet(":/qss/myStyle.qss");
    if (!styleSheet.open(QIODevice::ReadOnly))
    {
        qWarning("Can't open the style sheet file.");
        return;
    }
    qApp->setStyleSheet(styleSheet.readAll());
    GetLog *gl=new GetLog();
    ui->tabWidget->insertTab(0,gl,"日志查看");
    SetPermissions *sp=new SetPermissions();
    ui->tabWidget->insertTab(1,sp,"权限管理");

}

mainwdsfortwopage::~mainwdsfortwopage()
{
    delete ui;
}
