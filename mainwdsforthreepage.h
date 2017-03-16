#ifndef MAINWDSFORTHREEPAGE_H
#define MAINWDSFORTHREEPAGE_H

#include <QWidget>

namespace Ui {
class mainwdsforthreepage;
}

class mainwdsforthreepage : public QWidget
{
    Q_OBJECT

public:
    explicit mainwdsforthreepage(QWidget *parent = 0);
    ~mainwdsforthreepage();

private:
    Ui::mainwdsforthreepage *ui;
};

#endif // MAINWDSFORTHREEPAGE_H
