#include "mainwdfforfourpage.h"
#include "ui_mainwdfforfourpage.h"

mainwdfforfourpage::mainwdfforfourpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwdfforfourpage)
{
    ui->setupUi(this);
}

mainwdfforfourpage::~mainwdfforfourpage()
{
    delete ui;
}
