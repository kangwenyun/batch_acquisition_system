#ifndef SAVEPRODUCT_H
#define SAVEPRODUCT_H

#include "product.h"
#include "dbhelper.h"
#include "session.h"
#include <QDialog>
#include <QString>
#include <QDateTimeEdit>

//货物修改和增加的弹框
namespace Ui {
class saveProduct;
}

class saveProduct : public QDialog
{
    Q_OBJECT

public:
    explicit saveProduct(QWidget *parent = 0);
    ~saveProduct();
    void setProduct(Product curproduct);

private slots:
    void on_buttonBox_accepted();
    virtual void accept();

private:
    Ui::saveProduct *ui;
    Product curproduct;
    bool change;//1表示change,0表示add

    QString userId;
    QDateTimeEdit *dateTimeEdit;
    bool acc;
};

#endif // SAVEPRODUCT_H
