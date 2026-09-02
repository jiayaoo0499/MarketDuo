#ifndef RANKPANEL_H
#define RANKPANEL_H

#include <QWidget>

namespace Ui {
class RankPanel;
}

class RankPanel : public QWidget
{
    Q_OBJECT

public:
    explicit RankPanel(QWidget *parent = nullptr);
    ~RankPanel();

private:
    Ui::RankPanel *ui;
};

#endif // RANKPANEL_H
