#ifndef MAINWDFFORFOURPAGE_H
#define MAINWDFFORFOURPAGE_H

#include <QWidget>

namespace Ui {
class mainwdfforfourpage;
}

class mainwdfforfourpage : public QWidget
{
    Q_OBJECT

public:
    explicit mainwdfforfourpage(QWidget *parent = 0);
    ~mainwdfforfourpage();

private:
    Ui::mainwdfforfourpage *ui;
};

#endif // MAINWDFFORFOURPAGE_H
