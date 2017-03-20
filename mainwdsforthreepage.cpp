#include "mainwdsforthreepage.h"
#include "ui_mainwdsforthreepage.h"
#include "viewbatch.h"
#include "viewallbatch.h"
#include "checkbatch.h"
#include "finishbatch.h"
mainwdsforthreepage::mainwdsforthreepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforthreepage)
{
    ui->setupUi(this);
    ViewAllBatch* vab=new ViewAllBatch();
    ui->tabWidget->insertTab(0,vab,"全部批次信息查看");

    ViewBatch* vb=new ViewBatch();
    ui->tabWidget->insertTab(1,vb,"接受中批次信息查看");

    CheckBatch* cb=new CheckBatch();
    ui->tabWidget->insertTab(2,cb,"审核中批次信息查看");

    FinishBatch* fb=new FinishBatch();
    ui->tabWidget->insertTab(3,fb,"已完成批次信息查看");
}

mainwdsforthreepage::~mainwdsforthreepage()
{
    delete ui;
}
