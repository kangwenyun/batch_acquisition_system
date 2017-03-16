#include "mainwdsforthreepage.h"
#include "ui_mainwdsforthreepage.h"
#include <viewbatch.h>
#include <QFile>
mainwdsforthreepage::mainwdsforthreepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdsforthreepage)
{
    ui->setupUi(this);
//    QFile styleSheet(":/qss/myStyle.qss");
//    if (!styleSheet.open(QIODevice::ReadOnly))
//    {
//        qWarning("Can't open the style sheet file.");
//        return;
//    }
//    qApp->setStyleSheet(styleSheet.readAll());
    ViewBatch* vb=new ViewBatch();
    ui->tabWidget->insertTab(0,vb,"批次信息查看");

}

mainwdsforthreepage::~mainwdsforthreepage()
{
    delete ui;
}
