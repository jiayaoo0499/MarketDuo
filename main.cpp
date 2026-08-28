// 主入口：暂时是空壳，由 ④号位 在集成时填充。
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel label(QStringLiteral("MarketDuo - 工程骨架已就绪"));
    label.show();
    return app.exec();
}
