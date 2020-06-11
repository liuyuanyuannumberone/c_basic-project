#define  _CRT_SECURE_NO_WARNINGS        

//vs不推荐使用标准库函数（4996），宏阻止4996错误
#include<stdio.h>    //标准输入输出头文件
#include<stdlib.h>
#include<string.h>



//hello
void hello(){
	printf("hello word \n");
}



//system的本质就是以字符串的命令执行系统命令
void systemFunction() {
	//system("calc");
	//system("mspaint");
	//system("ping www.baidu.com");
};



//4996错误
void vsError() {
	char buf[32] = "";
	strcpy(buf, "hello string");
	printf("buf=%s\n", buf);
}



//cpu与寄存器的关系
void cpuInfo() {


}



//主函数
int main(int argc, char *argv[]) {
	return 0;
}

