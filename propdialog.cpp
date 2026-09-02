#include "propdialog.h"
#include "ui_propdialog.h"

PropDialog::PropDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PropDialog)
{
    ui->setupUi(this);
}

PropDialog::~PropDialog()
{
    delete ui;
}
