### 一、C环境

  gcc编译器

1. gcc编译可执行文件exe     gcc main.c  -o  main.exe     mian.exe回车执行

2. gcc 编译过程     

   预处理：宏替换、头文件包含、条件编译  .i 文件     gcc  -E  main.c  -o  main.i

   编译：将预处理好的文件编译成汇编语言(语法检查)  .s  文件  gcc  -S  main.i  -o  main.s

   汇编：将汇编文件生成二进制文件        .o   文件        gcc  -c  main.s  -o  main.o

   链接：将各个二进制文件+库函数+启动代码生成    可执行文件    gcc  main.o  -o  main.exe

