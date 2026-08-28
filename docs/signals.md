# 信号清单与接线约定（①号位维护）

规则：所有信号名、参数、触发时机以本文档为准；改接口必须更新文档并通知全员。

## 逻辑层广播信号（①号位定义，④号位负责接线）

| 信号 | 参数 | 触发时机 | 接到哪里 |
|---|---|---|---|
| goldChanged | int player, double money | 资金变化时 | ③号位 刷新资金标签 |
| repChanged | int player, int rep | 信誉变化时 | ③号位 刷新信誉标签 |
| stockChanged | int player, QString productId, int qty | 库存变化时 | ③号位 刷新库存 |
| propChanged | int player, QString propId, int qty | 道具变化时 | ③号位 刷新道具 |
| customersAllocated | int a, int b | 顾客分配完成时 | ③号位 中央显示/动画 |
| phaseChanged | int phase | 阶段切换时 | ③号位 按钮禁用/启用 |
| roundChanged | int round | 轮数变化时 | ③号位 轮数标签 |
| gameOver | int winner | 游戏结束时 | ③号位 结算弹窗 |

## UI 操作请求（③号位定义，④号位负责接线）

| 请求 | 参数 | 触发时机 | 接到哪里 |
|---|---|---|---|
| buyRequested | QString productId, int qty | 点进货按钮 | ①号位 onBuyGood |
| priceChanged | QString productId, double price | 改定价 | ①号位 onSetPrice |
| buyPropRequested | QString propId | 点买道具 | ①号位 onBuyProp |
| usePropToggled | QString propId, bool used | 勾选使用道具 | ①号位 onUseProp |
| readyClicked | - | 点准备按钮 | ①号位 onReady |

## 按钮命名规范（③号位遵守，④号位按此接线）

- 进货按钮：`buyBtn_商品id`
- 数量输入：`qtySpin_商品id`
- 定价输入：`priceSpin_商品id`
- 道具按钮：`propBtn_道具id`
- 使用勾选：`useCb_道具id`
- 准备按钮：`readyBtn`
