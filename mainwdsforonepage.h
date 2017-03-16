#ifndef MAINWDSFORONEPAGE_H
#define MAINWDSFORONEPAGE_H

#include <QWidget>

namespace Ui {
class mainwdsforonepage;
}

class mainwdsforonepage : public QWidget
{
    Q_OBJECT

public:
    explicit mainwdsforonepage(QWidget *parent = 0);
    ~mainwdsforonepage();

private:
    Ui::mainwdsforonepage *ui;
};

#endif // MAINWDSFORONEPAGE_H
