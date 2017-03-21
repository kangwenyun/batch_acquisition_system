#ifndef VIEWBATCH_H
#define VIEWBATCH_H

#include "qbatch.h"
#include "dbhelper.h"
#include <QWidget>
#include <QList>
namespace Ui {
class ViewBatch;
}

class ViewBatch : public QWidget
{
    Q_OBJECT

public:
    explicit ViewBatch(QWidget *parent = 0);
    ~ViewBatch();

private slots:
    void on_refresh_batch_clicked();
    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::ViewBatch *ui;
    QList<Qbatch> batchList;
    int i;//0代表没数据,1代表有数据
};

#endif // VIEWBATCH_H
