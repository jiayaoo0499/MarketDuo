#ifndef PLAYERPANEL_H
#define PLAYERPANEL_H

#include <QWidget>

namespace Ui {
class playerpanel;
}

class playerpanel : public QWidget
{
    Q_OBJECT

public:
    explicit playerpanel(QWidget *parent = nullptr);
    ~playerpanel();

signals:
    void buyRequested(QString id, int qty);
    void buyPropRequested(QString id);
    void usePropRequested(QString id);
    void readyClicked();  //声明
private:
    Ui::playerpanel *ui;
};

#endif // PLAYERPANEL_H
