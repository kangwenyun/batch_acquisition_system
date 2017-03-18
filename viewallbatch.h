#ifndef VIEWALLBATCH_H
#define VIEWALLBATCH_H

#include "qbatch.h"
#include "dbhelper.h"
#include <QWidget>
#include <QList>
namespace Ui {
class ViewAllBatch;
}

class ViewAllBatch : public QWidget
{
    Q_OBJECT

public:
    explicit ViewAllBatch(QWidget *parent = 0);
    ~ViewAllBatch();

private slots:
//    void on_add_batch_clicked();
    void on_refresh_batch_clicked();
    void on_tableWidget_clicked(const QModelIndex &index);

private:
    Ui::ViewAllBatch *ui;
    QList<Qbatch> batchList;
    int i;//0代表没数据,1代表有数据
};

#endif // VIEWALLBATCH_H
