#include "mainwdsforfivepage.h"
#include "ui_mainwdsforfivepage.h"
#include <viewdata.h>
#include <maintaindata.h>
#include <viewdatathread.h>
#include <QFile>
mainwdsforfivepage::mainwdsforfivepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforfivepage)
{
    ui->setupUi(this);
    QFile styleSheet(":/qss/myStyle.qss");
    if (!styleSheet.open(QIODevice::ReadOnly))
    {
        qWarning("Can't open the style sheet file.");
        return;
    }
    qApp->setStyleSheet(styleSheet.readAll());
    ViewData *vb=new ViewData();
    MaintainData *md=new MaintainData();
    ui->tabWidget->insertTab(0,vb,"货物数据查看");
    ui->tabWidget->insertTab(1,md,"货物数据维护");
}

mainwdsforfivepage::~mainwdsforfivepage()
{
    delete ui;
}
