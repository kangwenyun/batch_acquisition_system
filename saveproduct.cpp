#include "saveproduct.h"
#include "ui_saveproduct.h"
#include <QTableWidgetItem>
#include <QDateTime>
#include <QMessageBox>

saveProduct::saveProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::saveProduct)
{
    ui->setupUi(this);
    // 自适应列宽度
    ui->tableWidget->setColumnWidth(4,200);
    ui->tableWidget->setRowCount(1);
    Session *curper = Session::getInstance();
    userId = curper->getUserId();
    dateTimeEdit = new QDateTimeEdit();
    dateTimeEdit->setAutoFillBackground(true);
    dateTimeEdit->setFixedWidth(190);
    QDate d(2017,3,8);
    QDateTime dt(d);
    dateTimeEdit->setMinimumDateTime(dt);
    dateTimeEdit->setMaximumDateTime(QDateTime::currentDateTime());
    acc = true;
}

saveProduct::~saveProduct()
{
    delete ui;
}

void saveProduct::setProduct(Product curproduct)
{
    //通过curproduct.id是否为空来判断是要change还是add
    if(curproduct.number != NULL)//非空,change,把原有数据填上
    {
        change = true;
        this->curproduct = curproduct;
        //批次号,托盘号,货物号,货物类型,备注
        QTableWidgetItem *batchid = new QTableWidgetItem(curproduct.batchid);
        batchid->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(0,0,batchid);
        QTableWidgetItem *tray = new QTableWidgetItem(curproduct.tray);
        tray->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(0,1,tray);
        QTableWidgetItem *number = new QTableWidgetItem(curproduct.number);
        number->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(0,2,number);
        QTableWidgetItem *type = new QTableWidgetItem(curproduct.type);
        type->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(0,3,type);
        QString dateTime = curproduct.time;
        bool ok;
        QDate d(dateTime.mid(0, 4).toInt(&ok,10),dateTime.mid(5, 2).toInt(&ok,10),dateTime.mid(8, 2).toInt(&ok,10));
        QTime t(dateTime.mid(11, 2).toInt(&ok,10),dateTime.mid(14, 2).toInt(&ok,10),dateTime.mid(17, 2).toInt(&ok,10));
        QDateTime dt(d,t);
        dateTimeEdit->setDateTime(dt);
        dateTimeEdit->setDisplayFormat("yyyy-MM-dd hh:mm:ss");
        ui->tableWidget->setCellWidget(0,4,dateTimeEdit);
        QTableWidgetItem *flag = new QTableWidgetItem(QObject::tr("%1").arg(curproduct.flag));
        flag->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->setItem(0,5,flag);
    }else{
        change = false;
        dateTimeEdit->setDateTime(QDateTime::currentDateTime());
        dateTimeEdit->setDisplayFormat("yyyy-MM-dd hh:mm:ss");
        ui->tableWidget->setCellWidget(0,4,dateTimeEdit);
    }
}

void saveProduct::on_buttonBox_accepted()
{
    if(acc)
    {
        Product pro;
        bool ok;
        pro.batchid = ui->tableWidget->item(0,0)->text();
        pro.tray = ui->tableWidget->item(0,1)->text();
        pro.number = ui->tableWidget->item(0,2)->text();
        pro.type = ui->tableWidget->item(0,3)->text();
        pro.time = dateTimeEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss");
        pro.flag = ui->tableWidget->item(0,5)->text().toInt(&ok,10);
        Qres qres;
        if(change)
        {
            qres = dbhelper::getInstance()->QchangeData(userId,curproduct,pro);
        }else {
            qres = dbhelper::getInstance()->QaddDataWhileRefreshBatch(userId, pro);
        }
        if(!qres.success)
        {
            QMessageBox::warning(this,tr("warning"),qres.msg);
        }
    }
}

void saveProduct::accept()
{
    int j = 0;//没有未填项
    //判断是否有未填项
    for(int i = 0; i < 4 ; i++)
    {
        if(ui->tableWidget->item(0,i)->text() == NULL || ui->tableWidget->item(0,5)->text() == NULL )
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
