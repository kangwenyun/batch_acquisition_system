#include "mainwindowsforall.h"
#include "ui_mainwindowsforall.h"
#include "iconhelper.h"
#include "myhelper.h"
#include <mainwdsforonepage.h>
#include <mainwdsforfivepage.h>
#include <mainwdsforfourpage.h>
#include <mainwdsforthreepage.h>
#include <mainwdsfortwopage.h>
mainwindowsforall::mainwindowsforall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindowsforall)
{
    ui->setupUi(this);
    myHelper::FormInCenter(this);
    this->InitStyle();

    QPixmap pixmap4(":images/4.png");
    QIcon icon4(pixmap4);
    mainwdsforfourpage *four =new mainwdsforfourpage();
    ui->tabWidget->insertTab(0,four,icon4,"生产线信息");

    QPixmap pixmap3(":images/3.png");
    QIcon icon3(pixmap3);
    mainwdsforthreepage *three =new mainwdsforthreepage();
    ui->tabWidget->insertTab(1,three,icon3,"批次信息");

    QPixmap pixmap5(":images/5.png");
    QIcon icon5(pixmap5);
    mainwdsforfivepage *five =new mainwdsforfivepage();
    ui->tabWidget->insertTab(2,five,icon5,"货物信息");

    QPixmap pixmap2(":images/2.png");
    QIcon icon2(pixmap2);
    mainwdsfortwopage *two =new mainwdsfortwopage();
    ui->tabWidget->insertTab(3,two,icon2,"日志与权限");

    QPixmap pixmap1(":images/1.png");
    QIcon icon1(pixmap1);
    mainwdsforonepage *one =new mainwdsforonepage();
    ui->tabWidget->insertTab(4,one,icon1,"个人信息");
}
void mainwindowsforall::InitStyle()
{

    //设置窗体标题栏隐藏
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);
    location = this->geometry();
    max = false;
    mousePressed = false;

    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);

    IconHelper::Instance()->SetIcon(ui->btnMenu_Close, QChar(0xf00d), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf096), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu_Min, QChar(0xf068), 10);
    IconHelper::Instance()->SetIcon(ui->btnMenu, QChar(0xf0c9), 10);
    IconHelper::Instance()->SetIcon(ui->lab_Ico, QChar(0xf015), 12);
}


bool mainwindowsforall::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        this->on_btnMenu_Max_clicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}

void mainwindowsforall::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton) && !max) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void mainwindowsforall::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void mainwindowsforall::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void mainwindowsforall::on_btnMenu_Close_clicked()
{
    qApp->exit();
}

void mainwindowsforall::on_btnMenu_Max_clicked()
{
    if (max) {
        this->setGeometry(location);
        IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf096), 10);
        ui->btnMenu_Max->setToolTip("最大化");
    } else {
        location = this->geometry();
        this->setGeometry(qApp->desktop()->availableGeometry());
        IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf079), 10);
        ui->btnMenu_Max->setToolTip("还原");
    }
    max = !max;
}

void mainwindowsforall::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

mainwindowsforall::~mainwindowsforall()
{
    delete ui;
}

void mainwindowsforall::on_tabWidget_tabBarClicked(int index)
{
    if(index==4)
    {//4
        QPixmap pixmap1(":images/1.png");
        QIcon icon1(pixmap1);
        mainwdsforonepage *one =new mainwdsforonepage();
        ui->tabWidget->removeTab(index);
        ui->tabWidget->insertTab(4,one,icon1,"");
    }
    if(index==3)
    {//3
        QPixmap pixmap2(":images/2.png");
        QIcon icon2(pixmap2);
        mainwdsfortwopage *two =new mainwdsfortwopage();
        ui->tabWidget->removeTab(index);
        ui->tabWidget->insertTab(3,two,icon2,"");
    }
    if(index==1)
    {
        //1
        QPixmap pixmap3(":images/3.png");
        QIcon icon3(pixmap3);
        mainwdsforthreepage *three =new mainwdsforthreepage();
        ui->tabWidget->removeTab(index);
        ui->tabWidget->insertTab(1,three,icon3,"");
    }
    if(index==0)
    {
        //0
        QPixmap pixmap4(":images/4.png");
        QIcon icon4(pixmap4);
        mainwdsforfourpage *four =new mainwdsforfourpage();
        ui->tabWidget->removeTab(index);
        ui->tabWidget->insertTab(0,four,icon4,"");
    }
}
