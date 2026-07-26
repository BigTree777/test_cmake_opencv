# CMakeの最小バージョンを指定
cmake_minimum_required(VERSION 3.10)

# プロジェクト名と使用する言語を定義する。
# LANGUAGES CXX: このプロジェクトではC++のみを使用する
project(OpenCVExample LANGUAGES CXX)

# 使用するC++のバージョンを指定
# CMAKE_CXX_STANDARD_REQUIRED ON: 必ずそのバージョンを使う
# CMAKE_CXX_EXTENSIONS OFF: 拡張機能（例：GNU拡張）を無効化
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# コンパイルコマンド一覧（compile_commands.json）を出力
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# OpenCVライブラリを探す
# REQUIRED: 必須を意味する, 指定されたパッケージが見つからなければビルドは失敗
find_package(OpenCV REQUIRED)

# ヘッダファイルの場所を指定
# includeディレクトリとOpenCVのヘッダパスを追加
include_directories(${OpenCV_INCLUDE_DIRS} include)

# 実行ファイルを構成する
# main.cpp とクラスファイル群をコンパイルして OpenCVExample というバイナリを生成
add_executable(OpenCVExample
    src/main.cpp
    src/ImageLoader.cpp
    src/ImageViewer.cpp
)

# OpenCVのライブラリとリンク
target_link_libraries(OpenCVExample ${OpenCV_LIBS})
