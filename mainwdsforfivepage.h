#ifndef MAINWDSFORFIVEPAGE_H
#define MAINWDSFORFIVEPAGE_H

#include <QWidget>

namespace Ui {
class mainwdsforfivepage;
}

class mainwdsforfivepage : public QWidget
{
    Q_OBJECT

public:
    explicit mainwdsforfivepage(QWidget *parent = 0);
    ~mainwdsforfivepage();

private:
    Ui::mainwdsforfivepage *ui;
};

#endif // MAINWDSFORFIVEPAGE_H
