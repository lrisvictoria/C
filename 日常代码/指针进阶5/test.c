#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);
//	//p被强制类型转换为Unsigned long，被强制类型转换为整数，整形+1加的就是一个字节
//	//结果为0x00100001
//	//先强制类型转化为一个类型，算出值，然后再将他以地址的形式进行打印，不是去找那个数的地址
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//指针类型决定+-是跳过几个字节

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//printf("%#x,%#x", ptr1[-1], *ptr2);
//  return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//逗号表达式
//	//{ 1, 3, 5 }
//	//数组三行，两列
//	//不完全初始化，其他元素默认初始化为0
//	//数组真实元素{ {1, 3}, {5, 0}, {0, 0} }
//	int* p;
//	p = a[0];//a[0]为第一行的地址
//	printf("%d", p[0]);//a[0][0]
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//数组指针，指向数组四个元素，类型为int
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa取出二维数组的地址+1，跳过一个数组，指向数组末尾元素后面的位置
//	int* ptr2 = (int*)(*(aa + 1));
//	//aa为数组名为首元素地址，为第一行地址，地址+1，跳过一行指向第二行
//	//解引用应该拿到第二行，也就是拿到第二行首元素地址，也就是6的地址
//	
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//ptr1 - 1,指向10，解引用结果为10
//	//ptr2 - 1,指向5 ，解引用结果为5
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}