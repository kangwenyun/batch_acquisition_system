#include "mainwdsforfourpage.h"
#include "ui_mainwdsforfourpage.h"
#include <viewproline.h>
#include <setproline.h>
#include <modifyproline.h>
#include <QFile>
mainwdsforfourpage::mainwdsforfourpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforfourpage)
{
    ui->setupUi(this);
    QFile styleSheet(":/qss/myStyle.qss");
    if (!styleSheet.open(QIODevice::ReadOnly))
    {
        qWarning("Can't open the style sheet file.");
        return;
    }
    qApp->setStyleSheet(styleSheet.readAll());
    ViewProLine *vp=new ViewProLine();
    SetProLine *sp=new SetProLine();
    ModifyProLine *mp=new ModifyProLine();
    ui->tabWidget->insertTab(0,vp,"生产线信息查看");
    ui->tabWidget->insertTab(1,sp,"生产线信息设置");
    ui->tabWidget->insertTab(2,mp,"生产线信息修改");
}

mainwdsforfourpage::~mainwdsforfourpage()
{
    delete ui;
}
