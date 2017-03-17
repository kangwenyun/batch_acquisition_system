#ifndef CHANGEPERMISION_H
#define CHANGEPERMISION_H

#include "dbhelper.h"
#include "userinfo.h"
#include <QDialog>
#include <QString>

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

private:
    Ui::changePermision *ui;
    QString userId;
    UserInfo user_info;
    bool acc;
};

#endif // CHANGEPERMISION_H
