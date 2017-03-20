#ifndef CHECKBATCH_H
#define CHECKBATCH_H

#include "qbatch.h"
#include "dbhelper.h"
#include <QWidget>
#include <QList>
namespace Ui {
class CheckBatch;
}

class CheckBatch : public QWidget
{
    Q_OBJECT

public:
    explicit CheckBatch(QWidget *parent = 0);
    ~CheckBatch();

private slots:
    void on_refresh_batch_clicked();
    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::CheckBatch *ui;
    QList<Qbatch> batchList;
    int i;//0代表没数据,1代表有数据
};

#endif // CHECKBATCH_H
