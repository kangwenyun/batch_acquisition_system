#ifndef MAINWDSFORTWOPAGE_H
#define MAINWDSFORTWOPAGE_H

#include <QWidget>

namespace Ui {
class mainwdsfortwopage;
}

class mainwdsfortwopage : public QWidget
{
    Q_OBJECT

public:
    explicit mainwdsfortwopage(QWidget *parent = 0);
    ~mainwdsfortwopage();

private:
    Ui::mainwdsfortwopage *ui;
};

#endif // MAINWDSFORTWOPAGE_H
