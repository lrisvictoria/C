#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//
//enum Color
//{
//	RED = 3,
//	GREEN = 3,
//	BLUE = 10
//};
//
//int main()
//{
//	enum Color color = 5;
//	
//	return 0;
//}

#define RED 5
#define GREEN 7
#define BLUE 10

//#define 定义的标识符是没有类型的，它就是一个符号
//以后除字符串和注释中出现的任意标识符都会被替换为宏定义的数据

//他在预处理阶段就会完成替换，而不会像枚举定义的枚举常量一样具有类型