#ifndef VIEWDATA_H
#define VIEWDATA_H
#include "filedata.h"
#include "dbhelper.h"
#include <QWidget>
#include <QString>

namespace Ui {
class ViewData;
}

class ViewData : public QWidget
{
    Q_OBJECT

public:
    explicit ViewData(QWidget *parent = 0);
    ~ViewData();

private slots:
    void on_data_refresh_clicked();
    void refresh();
    void on_findId_textChanged(const QString &arg1);

public slots:  //这里制造一个名为Log的回调（槽），这个回调会对界面的一个QTextEdit控件追加一行文字（参数sMessage）
    void    Log(QString   sMessage) {
    m_qeLog=sMessage;
    qDebug()<<m_qeLog;
    on_data_refresh_clicked();
}
signals:
    void log(QString);
private:
    Ui::ViewData *ui;
    QString userId;
    FileData all;
     QString m_qeLog;
};

#endif // VIEWDATA_H
