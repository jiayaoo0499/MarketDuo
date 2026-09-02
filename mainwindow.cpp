#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->startBtn
            , &QPushButton::clicked, this, [this]() {
        ui->stackedWidget->setCurrentIndex(1);   // 1 = 第2页，也就是游戏页面
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
