#include "login.h"
#include <QApplication>
#include <dbhelper.h>
#include <mainwds.h>
#include <mainwdsforonepage.h>
#include <myhelper.h>
#include<viewdata.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myHelper::SetUTF8Code();
   // myHelper::SetStyle("black");//黑色风格
   //myHelper::SetStyle("blue");//蓝色风格
    myHelper::SetStyle("gray");//灰色风格
//    myHelper::SetStyle("navy");//天蓝色风格
    myHelper::SetChinese();
    dbhelper::getInstance();
   // db.initdb();
    Login l;
    l.show();
    return a.exec();
}
