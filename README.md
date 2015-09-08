# Qt_Com
Qt_Com

环境：ubuntu12.04+qt 5+qt creator；串口使用USB转串口线，设备号为/dev/ttyUSB0

在qt软件的“应用程序输出”栏里出现了这样一个问题：

Trying to open File

Could not open File! Error code : 5

无论是read出错还是Write出错看样子应该是串口没有打开。因为发送接收端的LED数据灯都没有任何闪烁。

为了证明串口是好的，我使用minicom，配置相同的波特率设备号等设置后，与外部串口设备进行通信，发现发送接收都完好，而且发送接收端的LED灯都会闪。

【我的解决方案】我检查了一下ttyUSB0的权限，确定是权限不足。

sudo chmod 777 /dev/ttyUSB0
