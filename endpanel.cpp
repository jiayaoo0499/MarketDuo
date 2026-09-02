#include "endpanel.h"
#include "ui_endpanel.h"

endPanel::endPanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::endPanel)
{
    ui->setupUi(this);
}

endPanel::~endPanel()
{
    delete ui;
}
