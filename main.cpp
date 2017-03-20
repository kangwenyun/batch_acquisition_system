#include "login.h"
#include <QApplication>
#include <dbhelper.h>
#include <mainwds.h>
#include <mainwdsforonepage.h>
#include <myhelper.h>
#include <viewdata.h>
#include "myproxystyle.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //添加style为这个工程;
    //这里为这个工程的所有窗口都去除了矩形虚线框
    qApp->setStyle(new MyProxyStyle);
    myHelper::SetUTF8Code();
    myHelper::SetStyle("gray");//灰色风格
    myHelper::SetChinese();
    /*dbhelper *db = */dbhelper::getInstance();
//    db->initdb();
    Login l;
    l.resize(401,301);
    l.move((a.desktop()->width() - l.width()) / 2, (a.desktop()->height() - l.height()) / 2);
    l.show();
    return a.exec();
}
