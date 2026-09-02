#include "rankpanel.h"
#include "ui_rankpanel.h"

RankPanel::RankPanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RankPanel)
{
    ui->setupUi(this);
    // 关闭按钮：点击后关闭排行榜窗口
    connect(ui->pushButton, &QPushButton::clicked, this, &QWidget::close);
}

RankPanel::~RankPanel()
{
    delete ui;
}
