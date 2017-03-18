#include "changepermision.h"
#include "ui_changepermision.h"
#include "qres.h"
#include "session.h"
#include <QMessageBox>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>

changePermision::changePermision(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePermision)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    Session *curper = Session::getInstance();
    userId = curper->getUserId();
}

changePermision::~changePermision()
{
    delete ui;
}

void changePermision::on_buttonBox_accepted()
{
    if(acc)
    {
        Qres qres = dbhelper::getInstance()->QsetPermission(userId,ui->tableWidget->item(0,0)->text(),
                                          ui->tableWidget->item(0,2)->text());
        if(!qres.success)
        {
            QMessageBox::warning(this,tr("warning"),qres.msg);
        }
    }
}

void changePermision::setUserInfo(UserInfo user_info)
{
    this->user_info = user_info;
    //只有level是可写的
    QTableWidgetItem *user_id = new QTableWidgetItem(user_info.userid);
    ui->tableWidget->setItem(0,0,user_id);
    user_id->setFlags(Qt::NoItemFlags);
    QTableWidgetItem *user_name = new QTableWidgetItem(user_info.username);
    ui->tableWidget->setItem(0,1,user_name);
    user_name->setFlags(Qt::NoItemFlags);
    QTableWidgetItem *user_level = new QTableWidgetItem(user_info.level);
    ui->tableWidget->setItem(0,2,user_level);
}

void changePermision::accept()
{
    int j = 0;//没有未填项
    //判断是否有未填项
    if(ui->tableWidget->item(0,2)->text() == NULL )
    {
        j = QMessageBox::warning(this,tr("warning"),tr("请填满所有项!"));
    }
    if( j == 0)
    {
        acc = true;
        QDialog::accept();
    }else{
        acc = false;
    }
}

void changePermision::keyPressEvent(QKeyEvent *event)
{
    accept();
    if (event->key() == Qt::Key_Return)
        on_buttonBox_accepted();
}
