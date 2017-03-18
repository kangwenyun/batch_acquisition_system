#ifndef VIEWPROLINE_H
#define VIEWPROLINE_H
#include<QTreeWidgetItem>
#include <QWidget>
#include <qbatch.h>
#include <QList>
#include <qres.h>
namespace Ui {
class ViewProLine;
}

class ViewProLine : public QWidget
{
    Q_OBJECT

public:
    explicit ViewProLine(QWidget *parent = 0);
    ~ViewProLine();
   void refresh();
private slots:
    void on_treeWidget_doubleClicked(const QModelIndex &index);

    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_treeWidget_itemChanged(QTreeWidgetItem *item, int column);

private:
    Ui::ViewProLine *ui;
    QList<Qbatch> list;
    Qres qres;
};

#endif // VIEWPROLINE_H
