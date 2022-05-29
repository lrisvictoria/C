 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#define EPSILON 0.0000000001
#define NUM 64
//const int* test()
//{
//	static int g_var = 100;
//	return &g_var;
//}
//int main()
//{
//	int* p = test();
//	printf("%p\n", p);
//}

//volatile

//不希望被编译器优化，达到稳定访问内存的目的

//定义结构体，本质是制作类型

//struct stu
//{
//	char name[NUM / 2];
//	int age;
//	char sex;
//	char addr[NUM];
//}a,b,c;
//
//void show(struct stu* p)
//{
//	printf("%s\n", p->name);
//}
////结构体不能整体被赋值
//int main()
//{
//	//struct stu x = { "anduin",19,'f',"baofengcheng" };
//	struct stu x;
//	strcpy(x.name, "张三");
//	x.age = 19;
//
//	//为什么结构体访问会有两种访问方式 
//	//1.结构体在它定义的时候访问用.更加方便
//	//2.如果传参的话用指向操作符更方便，一个结构体可能贯穿多个函数
//	//不同函数传参 如果是指针的话，就很有必要对结构体单独设置一种访问方式
//	//便于代码的编写
//
//	struct stu* p = &x;
//	
//	return 0;
//}


//空结构体 
//在gcc编译器上编译结果为0
//vs上编不过  


//#include <stdio.h>
//int main()
//{
//	double x = 1;
//	double y = 0.1;
//	printf("%.50f\n", x);
//	printf("%.50f\n", y);
//
//	printf("%.50f\n", x - 0.9);
//	printf("%.50f\n", y);
//	if (((x-0.9)-y)>-EPSILON && ((x-0.9)-y)<EPSILON)
//	{
//		printf("you can see me!\n");
//
//	}
//	else
//	{
//		printf("oops!");
//	}
//}

//int main()
//{
//	int ret = printf("%d\n", "1234");
//	printf("%d\n", ret);
//}
//int main()
//{
//	int a = 10;
//	scanf("%d", &a);
//}
//int main()
//{
//	//int c = 0;
//	while (1)
//	{
//		int c = getchar();
//		if (c == '#')
//		{
//			break;
//		}
//		printf("%c ", c);
//	}
//	
//}
int main()
{
	int i = 0;
	int p = 0;
	for (i = 1, p = 1; i <= 5; i++)
		p *= i;
}