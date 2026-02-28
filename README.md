# C++ 学习示例 (cpp-learning)

本仓库收录了个人学习 C++ 时的分章示例代码，按章节组织（chapter1..chapter10）。代码以小示例为主，部分子目录包含多文件示例或 CMake 演示。

**仓库概览**
- 每章一个目录（例如 `chapter1/`, `chapter2/` …），目录下是对应的示例源文件和子目录。
- 有些子目录为多文件示例或练习，并包含 `CMakeLists.txt`（可使用 CMake 构建）。

示例目录（部分）：
- `chapter1/`：入门示例（`hello.cpp`、宏、多个文件示例等）
- `chapter2/`：基本类型与转换
- `chapter3/`：流程控制（if/for/while/switch）
- `chapter4/`：数组、结构体与 CMake 示例
- `chapter5/`：指针与内存管理
- `chapter6/`：内联与引用
- `chapter7/`：函数、模板与重载
- `chapter8/`：矩阵操作（含头文件示例）
- `chapter9/`：类与 OOP 示例（含多文件示例）
- `chapter10/`：时间与其它练习

（注：仓库结构可能随学习进度更新）

**依赖**
- 一个 C++ 编译器（推荐 `g++` / MinGW / MSYS2 或者 Visual Studio 的 `cl`）。
- 若使用 CMake 构建，需要安装 `cmake`。

**快速开始**

1) 单文件示例（直接编译运行）

```bash
g++ -std=c++17 -O2 -Wall chapter1/hello.cpp -o bin/hello
# Windows 上运行:
./bin/hello    # 或 .\bin\hello.exe
```

2) 多文件示例（手动编译并链接）

```bash
g++ -std=c++17 chapter1/multi-file/main.cpp chapter1/multi-file/mul.cpp -o bin/multi
./bin/multi
```

3) 使用 CMake（适用于含 `CMakeLists.txt` 的子目录，例如 `chapter4/cmake-demo/`）

```bash
mkdir -p build && cd build
cmake ..
cmake --build .
# 生成的可执行文件位于 build 目录或子目录，按 CMakeLists 指定运行
```

**如何添加新的示例**
- 在对应的 `chapterX/` 下添加源文件或子目录。
- 若示例由多个文件组成，建议添加简短的 `CMakeLists.txt` 以便复用与测试。

**贡献与许可**
- 此仓库为个人学习示例；若需使用或转载其中代码，请注明出处并联系作者以获取许可。
