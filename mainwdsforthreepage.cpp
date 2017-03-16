#include "mainwdsforthreepage.h"
#include "ui_mainwdsforthreepage.h"
#include <viewbatch.h>
mainwdsforthreepage::mainwdsforthreepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforthreepage)
{
    ui->setupUi(this);
    ViewBatch* vb=new ViewBatch();
    ui->tabWidget->insertTab(0,vb,"批次信息查看");

}

mainwdsforthreepage::~mainwdsforthreepage()
{
    delete ui;
}
