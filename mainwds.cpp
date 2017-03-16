#include "mainwds.h"
#include "ui_mainwds.h"
#include<mainwdsforonepage.h>
#include<mainwdsforfivepage.h>
#include<mainwdsforfourpage.h>
#include<mainwdsforthreepage.h>
#include<mainwdsfortwopage.h>
#include "iconhelper.h"
#include "myhelper.h"
mainwds::mainwds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainwds)
{

    ui->setupUi(this);
    myHelper::FormInCenter(this);
    this->InitStyle();
    QPixmap pixmap1(":images/key.png");
    QIcon icon1(pixmap1);
    mainwdsforonepage *one =new mainwdsforonepage();
    ui->tabWidget->insertTab(0,one,icon1,"");

    QPixmap pixmap2(":images/key.png");
    QIcon icon2(pixmap2);
    mainwdsfortwopage *two =new mainwdsfortwopage();
    ui->tabWidget->insertTab(1,two,icon2,"");

    QPixmap pixmap3(":images/key.png");
    QIcon icon3(pixmap3);
    mainwdsforthreepage *three =new mainwdsforthreepage();
    ui->tabWidget->insertTab(2,three,icon3,"");

    QPixmap pixmap4(":images/key.png");
    QIcon icon4(pixmap4);
    mainwdsforfourpage *four =new mainwdsforfourpage();
    ui->tabWidget->insertTab(3,four,icon4,"");

    QPixmap pixmap5(":images/key.png");
    QIcon icon5(pixmap5);
    mainwdsforfivepage *five =new mainwdsforfivepage();
    ui->tabWidget->insertTab(4,five,icon5,"");
}
void mainwds::InitStyle()
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


bool mainwds::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        this->on_btnMenu_Max_clicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}

void mainwds::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton) && !max) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void mainwds::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void mainwds::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

void mainwds::on_btnMenu_Close_clicked()
{
    qApp->exit();
}

void mainwds::on_btnMenu_Max_clicked()
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

void mainwds::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

void mainwds::on_pushButton_clicked()
{
    myHelper::ShowMessageBoxInfo("恭喜你获得我公司送出的1000万元大礼一份!");
}

mainwds::~mainwds()
{
    delete ui;
}
