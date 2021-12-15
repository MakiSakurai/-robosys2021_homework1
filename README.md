# robosys2021_homework1
## 概要
Raspberry Pi4 ModelB 4GBを使って、入力された文字からサーボモータを動かすデバイスドライバを作成しました。

## 回路構成

### 部品

- RaspberryPi4
- NUCLEO-F303K8
- マイクロサーボ　ＳＧ９２Ｒ
- USBケーブル TypeC
- ブレッドボード
- ジャンパ線(オス×オス)：6個

### 回路図

## 使用方法

```
https://github.com/MakiSakurai/robosys2021_homework1.git
cd robosys2021_homework1/homework1
make
sudo insmod homework1.ko
sudo chmod 666 /dev/homework10
```
次のコマンドを実行するとサーボモータが回転し、戻ります
```
echo e > /dev/homework0
```
次のコマンドを実行すると、サーボモータが回転と戻る動きを数回繰り返します。
```
echo n > /dev/homework0
```

### 実際に動かしている様子
https://youtu.be/EcZV0k68OHs
