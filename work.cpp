#include "work.h"
#include<QFile>
#include<session.h>
work::work(QObject *parent) :
    QThread(parent)
{
}

void work::refresh()
{
    while(1)
    {
    QFile file("Lo1.txt");
    QFileInfo f("Lo1.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug()<<"Can't open the file!"<<endl;
    }
    FileData temp;
    temp.time=f.lastModified().toString("yyyy-MM-dd hh:mm:ss");
    if(QString::compare(temp.time,all.time)==0)
    {
        //qDebug()<<"数据没有发生改变";
    }
    else
    {
        qDebug()<<"数据发生了改变";
   QTextStream in(&file);
        while(!in.atEnd()) {
                QString line = in.readLine();
                QString str(line);
                temp.data=temp.data+str+"\n";
                temp.line=temp.line+1;
                if(str!=NULL)
                {
                QList<QString> list = line.split(',');
                Product product(list[0],list[1],list[2],list[3],list[4],list[5].toInt());
                dbhelper::getInstance()->QexistOrInsert(product);
        }
        }
         emit log("1");
            all=temp;
            //qDebug()<<all.data;
    }
    file.close();
    sleep(5);
    }
}
void work::run()
{
refresh();
}
