#include "viewproline.h"
#include "ui_viewproline.h"
#include "dbhelper.h"
#include "addbatch.h"
#include <QMessageBox>
//生产线信息的查看
ViewProLine::ViewProLine(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProLine)
{
    ui->setupUi(this);
    refresh();
}

void ViewProLine::refresh()
{
    ui->treeWidget->clear();
    list= dbhelper::getInstance()->QgetallBatch();
    QTreeWidgetItem* A = new QTreeWidgetItem(QStringList()<<"未接受的批次");
    QTreeWidgetItem* B = new QTreeWidgetItem(QStringList()<<"接受的批次");
    QTreeWidgetItem* C = new QTreeWidgetItem(QStringList()<<"审核中的批次");
    QTreeWidgetItem* D = new QTreeWidgetItem(QStringList()<<"完成的批次");
    ui->treeWidget->addTopLevelItem(A);
    ui->treeWidget->addTopLevelItem(B);
    ui->treeWidget->addTopLevelItem(C);
    ui->treeWidget->addTopLevelItem(D);
    for(int i = 0; i < list.length(); i++)
    {
        QStringList columItemList;
        QTreeWidgetItem *child;
        columItemList<<list.at(i).batchid;
        child = new QTreeWidgetItem(columItemList);

        if(list.at(i).status=="unaccept")
        {
            A->addChild(child);
        }
        else if(list.at(i).status=="accept")
        {
            B->addChild(child);
        }
        else if(list.at(i).status=="check")
        {
            C->addChild(child);
        }
        else
        {
            D->addChild(child);
        }
    }
}

ViewProLine::~ViewProLine()
{
    delete ui;
}

void ViewProLine::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(item->text(column)!= "未接受的批次" &&  item->text(column)!= "接受的批次" && item->text(column) != "审核中的批次" &&item->text(column) != "完成的批次")
    {
        qDebug()<<item->text(column);
        int i=dbhelper::getInstance()->Qjudgestatus(item->text(column));
        qDebug()<<i;
        if(i==1)
        {
            switch(QMessageBox::question(this,tr("询问"),tr("确定接受该批次单吗？?"),
                                         QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
            {
            case QMessageBox::Ok:
                qres = dbhelper::getInstance()->QtoacceptBatch("admin",item->text(column));
                   refresh();
                if(!qres.success)
                {
                    QMessageBox::warning(this,tr("warnig"),qres.msg);
                    return;
                }


                break;
            case QMessageBox::Cancel:
                break;
            default:
                break;
            }
        }
        else if(i==2)
        {
            switch(QMessageBox::question(this,tr("询问"),tr("确定提交该批次单吗？?"),
                                         QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
            {
            case QMessageBox::Ok:
                qres=dbhelper::getInstance()->QtocheckBatch("admin",item->text(column));
                 refresh();
                if(!qres.success)
                {
                    QMessageBox::warning(this,tr("warnig"),qres.msg);
                    return;
                }


                break;
            case QMessageBox::Cancel:
                break;
            default:
                break;
            }
        }
    }
}

void ViewProLine::on_add_batch_clicked()
{
    addBatch adb;
    if(adb.exec() == QDialog::Accepted)
    {
        refresh();
    }
}
