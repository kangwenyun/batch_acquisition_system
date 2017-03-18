#include "mainwdsforfourpage.h"
#include "ui_mainwdsforfourpage.h"
#include <viewproline.h>
mainwdsforfourpage::mainwdsforfourpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforfourpage)
{
    ui->setupUi(this);
    ViewProLine *vp=new ViewProLine();;
    ui->tabWidget->insertTab(0,vp,"生产线进度查看");
}

mainwdsforfourpage::~mainwdsforfourpage()
{
    delete ui;
}
