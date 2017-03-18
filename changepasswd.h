#ifndef CHANGEPASSWD_H
#define CHANGEPASSWD_H

#include "dbhelper.h"
#include <QWidget>
#include <QString>
#include <QKeyEvent>

namespace Ui {
class ChangePasswd;
}

class ChangePasswd : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePasswd(QWidget *parent = 0);
    ~ChangePasswd();

private slots:
    void on_ok_button_clicked();
    void keyPressEvent(QKeyEvent * event);

private:
    Ui::ChangePasswd *ui;
    QString userId;
};

#endif // CHANGEPASSWD_H
