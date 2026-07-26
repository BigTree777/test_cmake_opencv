# README

CMakeを利用したプロジェクトのサンプル  
OSはUbuntuとする  
VSCodeを用いたデバッグも可能

## 環境構築
- OS: Ubuntu
- 以下のコマンドを実行
```shell
 sudo apt update
 sudo apt install build-essential cmake gdb libopencv-dev
```

## コマンドによるビルドと実行
```shell
cd /path/to/TestCMake

# Releaseモード
cmake -B build/Release -D CMAKE_BUILD_TYPE=Release
cd build/Release
make
./OpenCVExample

# Debugモード
cmake -B build/Debug -D CMAKE_BUILD_TYPE=Debug
cd build/Debug
make
./OpenCVExample
```

## VSCodeを使ったデバッグ
1. VSCodeからTestCMakeを開く
2. `実行とデバッグ` -> "[Debug] OpenCVExample"を実行
