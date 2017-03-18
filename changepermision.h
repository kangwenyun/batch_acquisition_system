#ifndef CHANGEPERMISION_H
#define CHANGEPERMISION_H

#include "dbhelper.h"
#include "userinfo.h"
#include <QDialog>
#include <QString>
#include <QKeyEvent>

namespace Ui {
class changePermision;
}

class changePermision : public QDialog
{
    Q_OBJECT

public:
    explicit changePermision(QWidget *parent = 0);
    ~changePermision();
    void setUserInfo(UserInfo user_info);

private slots:
    void on_buttonBox_accepted();

    virtual void accept();

    void keyPressEvent(QKeyEvent * event);

private:
    Ui::changePermision *ui;
    QString userId;
    UserInfo user_info;
    bool acc;
};

#endif // CHANGEPERMISION_H
