#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	//char分为三种类型
//	char;//char的类型与编译器有关，不确定，所以另外归一类
//	signed char;
//	unsigned char;
//
//}

//空类型void
//通常用语函数返回值，函数参数，指针
//
//函数返回值
//void test1()//无返回值
//{}
//void test2(void)//函数接收参数，参数部分加void
//{}
//int main()
//{
//	void* p = NULL;
//	//void*可以存放任何类型的指针
//	int a = 10;
//	void* p1 = &a;//没问题
//	p1++;//err，不知道类型，无法决定跳过几个字节
//	*p1;//err，不知道类型，无法决定解引用的权限
//	//一般用来临时存放地址，用的时候拿走或者强转使用
//
//	return 0;
//}
//int main()
//{
//	int a = 0x12345678;//16进制以字节为单位在内存中进行存储
//	//大小端存储时以字节为单元，以16进制两位作为一个单元，按照大小端存储规律存储
//	//
//}
//16进制
//0-15
//0~9 abcdef
//f
//1111
//8+4+2+1=15
//每一个16进制位就是4个二进制位4个比特位，那么两个就是八个比特位，1个字节


//写一个程序判断当前机器的字节序
//回顾：
//小端字节序：把一个数值的低位字节的内容，存放到低地址处，高位字节的内容，存放到高地址处
//大端字节序：把一个数值的高位字节的内容，存放到低地址处，低位字节的内容，存放到高地址处。
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		return 1;
//	else
//		return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;//1大端或小端存储，第一位为0或者1，正好和下面接收的值相同，直接返回
//}
//int main()
//{
//	if (check_sys() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//权重，即权值，和我理解的相同
//就是对于进制来说，每位的权值，例如10^0
//权重就是它这一位是1时所代表的意思

//如何理解char = -1？
//
//char就是存储空间为1个字节的整形，如果以数字解释就是内存中存储的数据
//如果以字符解释就是根据ascii表将对应的数字解释成为对应字符
//当然有些数字对应的ascii字符是不可见字符那显示不出来了而已
//
//- 1按无符号解释就是255，255对应什么字符就显示什么，没有对应的就显示不出来或者乱码。