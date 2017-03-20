#ifndef FINISHBATCH_H
#define FINISHBATCH_H

#include "qbatch.h"
#include "dbhelper.h"
#include <QWidget>
#include <QList>
namespace Ui {
class FinishBatch;
}

class FinishBatch : public QWidget
{
    Q_OBJECT

public:
    explicit FinishBatch(QWidget *parent = 0);
    ~FinishBatch();

private slots:
    void on_refresh_batch_clicked();
    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::FinishBatch *ui;
    QList<Qbatch> batchList;
    int i;//0代表没数据,1代表有数据
};

#endif // FINISHBATCH_H
