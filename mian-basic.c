#define  _CRT_SECURE_NO_WARNINGS        

//vs���Ƽ�ʹ�ñ�׼�⺯����4996��������ֹ4996����
#include<stdio.h>    //��׼�������ͷ�ļ�
#include<stdlib.h>
#include<string.h>



//hello
void hello(){
	printf("hello word \n");
}



//system�ı��ʾ������ַ���������ִ��ϵͳ����
void systemFunction() {
	//system("calc");
	//system("mspaint");
	//system("ping www.baidu.com");
};



//4996����
void vsError() {
	char buf[32] = "";
	strcpy(buf, "hello string");
	printf("buf=%s\n", buf);
}



//cpu��Ĵ����Ĺ�ϵ
void cpuInfo() {


}



//������
int main(int argc, char *argv[]) {
	return 0;
}

