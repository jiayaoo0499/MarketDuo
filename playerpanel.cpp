#include "playerpanel.h"
#include "ui_playerpanel.h"

playerpanel::playerpanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::playerpanel)
{
    ui->setupUi(this);
}

playerpanel::~playerpanel()
{
    delete ui;
}
