#ifndef PROPDIALOG_H
#define PROPDIALOG_H

#include <QDialog>

namespace Ui {
class PropDialog;
}

class PropDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PropDialog(QWidget *parent = nullptr);
    ~PropDialog();

private:
    Ui::PropDialog *ui;
};

#endif // PROPDIALOG_H
