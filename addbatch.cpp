#include "addbatch.h"
#include "ui_addbatch.h"
#include "qres.h"
#include "session.h"
#include <QString>
#include <QMessageBox>

addBatch::addBatch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBatch)
{
    ui->setupUi(this);
    // 自适应列宽度,隐藏垂直表头
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setRowCount(1);
    Session *curper = Session::getInstance();
    userId = curper->getUserId();
    acc = true;
    //将焦点聚集到item[0,0]上
  //  ui->tableWidget->item(0,0)->setSelected(true);
}

addBatch::~addBatch()
{
    delete ui;
}

void addBatch::on_buttonBox_accepted()
{
    if(acc)
    {
        QString batchid = ui->tableWidget->item(0,0)->text();
        QString batchsum = ui->tableWidget->item(0,1)->text();
        Qres qre = dbhelper::getInstance()->QaddBatch(userId,batchid,batchsum);
        if(!qre.success)
        {
            QMessageBox::warning(this,tr("warning"),qre.msg);
        }
    }
}

void addBatch::accept()
{
    int j = 0;//没有未填项
    //判断是否有未填项
    for(int i = 0; i < 2 ; i++)
    {
        if(ui->tableWidget->item(0,i)->text() == NULL)
        {
            j = QMessageBox::warning(this,tr("warning"),tr("请填满所有项!"));
            break;
        }
    }
    if( j == 0)
    {
        acc = true;
        QDialog::accept();
    }else{
        acc = false;
    }
}

