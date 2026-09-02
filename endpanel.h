#ifndef ENDPANEL_H
#define ENDPANEL_H

#include <QWidget>

namespace Ui {
class endPanel;
}

class endPanel : public QWidget
{
    Q_OBJECT

public:
    explicit endPanel(QWidget *parent = nullptr);
    ~endPanel();

private:
    Ui::endPanel *ui;
};

#endif // ENDPANEL_H
