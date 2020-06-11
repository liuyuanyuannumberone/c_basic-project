### 一、C环境

  gcc编译器

1. gcc编译可执行文件exe     gcc main.c  -o  main.exe     mian.exe回车执行

2. gcc 编译过程     

   预处理：宏替换、头文件包含、条件编译  .i 文件     gcc  -E  main.c  -o  main.i

   编译：将预处理好的文件编译成汇编语言(语法检查)  .s  文件  gcc  -S  main.i  -o  main.s

   汇编：将汇编文件生成二进制文件        .o   文件        gcc  -c  main.s  -o  main.o

   链接：将各个二进制文件+库函数+启动代码生成    可执行文件    gcc  main.o  -o  main.exe

### 二、VS的使用

  ctrl k f   格式化代码

  ctrl k c/u   注释或取消注释      //   /**/

  F12 转到定义   ctrl+f 查找  ctrl+h  替换  

 SHIFT + END选择至行尾              ctrl +l 删除一行
 SHIFT + HOME选择至行开始处  

  Ctrl + M + O: 折叠所有方法

 Ctrl + M + M: 折叠或者展开当前方法

 Ctrl + M + L: 展开所有方法

F9 设置断点   ctrl+F7 编译    ctrl+F10 运行到光标处

F5开始调试   shift+F5 停止调试    ctrl+F5 （开始执行不调试）  ctrl+shift+F5 重新启动调试

F11 （逐语句step）会进入函数内部 

shift +F11（跳出） 跳出函数。（执行完跳出）

F10 （逐过程next） 跳过函数。（执行完跳出）

### 三、初步了解



