#ifndef MAINWDS_H
#define MAINWDS_H

#include <QMainWindow>

namespace Ui {
class mainwds;
}

class mainwds : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwds(QWidget *parent = 0);
    ~mainwds();
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
    Ui::mainwds *ui;
    QPoint mousePoint;
    bool mousePressed;
    bool max;
    QRect location;
};

#endif // MAINWDS_H
