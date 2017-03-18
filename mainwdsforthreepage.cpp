#include "mainwdsforthreepage.h"
#include "ui_mainwdsforthreepage.h"
#include "viewbatch.h"
#include "viewallbatch.h"
mainwdsforthreepage::mainwdsforthreepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforthreepage)
{
    ui->setupUi(this);
    ViewAllBatch* vab=new ViewAllBatch();
    ui->tabWidget->insertTab(0,vab,"全部批次信息查看");

    ViewBatch* vb=new ViewBatch();
    ui->tabWidget->insertTab(1,vb,"已接受批次信息查看");

}

mainwdsforthreepage::~mainwdsforthreepage()
{
    delete ui;
}
