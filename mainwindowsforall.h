#ifndef MAINWINDOWSFORALL_H
#define MAINWINDOWSFORALL_H

#include <QWidget>

namespace Ui {
class mainwindowsforall;
}

class mainwindowsforall : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindowsforall(QWidget *parent = 0);
    ~mainwindowsforall();
    void InitStyle();
protected:
    bool eventFilter(QObject *obj, QEvent *event);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);

private slots:
    void on_btnMenu_Close_clicked();

    void on_btnMenu_Max_clicked();

    void on_btnMenu_Min_clicked();

    void on_pushButton_clicked();



private:
    Ui::mainwindowsforall *ui;
    QPoint mousePoint;
    bool mousePressed;
    bool max;
    QRect location;
};

#endif // MAINWINDOWSFORALL_H
