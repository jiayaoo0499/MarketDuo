# MarketDuo 双人对弈摊位经营游戏

Qt 6.8.3 + C++ + Qt Widgets 实现的 2D 像素风双人对弈摊位经营游戏。

## 团队协作规则

- 四个人只改自己的文件夹，不碰别人的文件
- ①号位：models/（核心逻辑）
- ②号位：data/（配置与数值）
- ③号位：ui/（界面与素材）
- ④号位：CMakeLists.txt、main.cpp、README.md（联调整合）
- 接口文档在 docs/signals.md，改接口必须同步更新并通知所有人

## 上传代码流程

1. 克隆仓库：`git clone 仓库地址`
2. 建自己的分支：`git checkout -b person1`（1~4 按自己编号）
3. 每天改完自己的文件：
   ```
   git add 自己的文件夹
   git commit -m "今天做了什么"
   git push origin person1
   ```
4. ④号位每天合并：
   ```
   git checkout main
   git merge person1
   git merge person2
   git merge person3
   ```

## 编译

用 Qt Creator 打开 CMakeLists.txt，Kit 选 Qt 6.8.3 (MinGW 64-bit)。
