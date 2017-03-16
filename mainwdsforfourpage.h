#ifndef MAINWDSFORFOURPAGE_H
#define MAINWDSFORFOURPAGE_H

#include <QWidget>

namespace Ui {
class mainwdsforfourpage;
}

class mainwdsforfourpage : public QWidget
{
    Q_OBJECT

public:
    explicit mainwdsforfourpage(QWidget *parent = 0);
    ~mainwdsforfourpage();

private:
    Ui::mainwdsforfourpage *ui;
};

#endif // MAINWDSFORFOURPAGE_H
