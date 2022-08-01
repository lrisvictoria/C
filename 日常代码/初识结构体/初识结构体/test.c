#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//struct Stu是一个结构体类型
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[8];
//	float score;
//}s1, s2, s3;//是通过结构体类型创建的变量
////s1,s2,s3为全局变量
//
////typedef 类型重定义/重命名
////第一种写法：
//typedef struct Stu Stu;
//
//int main()
//{
//	//s4,s5是局部变量
//	//struct Stu才是结构体类型，不能随便省略struct
//	struct Stu s4;
//	struct Stu s5;
//	Stu s6; 
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[8];
//	float score;
//}Stu;
//
//int main()
//{
//	//s4,s5是局部变量
//	//struct Stu才是结构体类型，不能随便省略struct
//	struct Stu s4;
//	struct Stu s5;
//	Stu s6;
//}
//结构体变量的定义和初始化

//struct Point
//{
//	int x;
//	int y;
//}p1;
//int main()
//{
//	struct Point p;
//	return 0;
//}

//初始化
//struct Point
//{
//	int x;
//	int y;
//}p1 = {1,2};
//struct S
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//void print(struct S* ps)
//{
//	printf("%c\n", ps->c);
//	printf("%d %d\n", ps->sp.x, ps->sp.y);
//	printf("%.2f\n", ps->d);
//	printf("%s\n",ps->arr);
//}
//int main()
//{
//	struct Point p = { 100,200 };
//	struct S ss = { 'x',{10,11},3.14,"anduin" };
//	/*printf("%c\n", ss.c);
//	printf("%d %d\n", ss.sp.x, ss.sp.y);
//	printf("%.2f\n", ss.d);
//	printf("%s\n", ss.arr);*/
//	int a = 1000;
//	int b = 2000;
//
//	ss.c = 'a';
//	ss.sp.x = a;
//	ss.sp.y = b;
//	ss.d = 3.14;
//	//arr是首元素地址，且为常量地址
//	//改地址不能被改变，但是我们可以把要改的内容
//	//拷贝到地址指向的空间里
//	strcpy(ss.arr, "world");
//	print(&ss);
//	return 0;
//}
//结构成员访问操作符
//. 结构体变量.结构体成员
//-> 结构体指针.结构体成员
struct Point
{
	int x;
	int y;
}p1 = { 1,2 };
struct S
{
	char c;
	struct Point sp;
	double d;
	char arr[20];
};
void print(struct S* ps)
{
	printf("%c\n", ps->c);
	printf("%d %d\n", ps->sp.x, ps->sp.y);
	printf("%.2f\n", ps->d);
	printf("%s\n", ps->arr);
}
int main()
{
	struct S ss = { 'x',{10,11},3.14,"anduin" };
	print(&ss);
	return 0;
}
   