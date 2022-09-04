#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//c语言仅仅存在简单类型是无法描述复杂对象的
//所以我们需要自定义类型来讲它们组合起来

//自定义类型包括结构体，枚举，联合体

//struct tag
//{
//	member - list;//成员列表
//}variable-list;//变量列表(全局变量)

struct Stu
{
	char name[20];
	int age;
	double score;
}s1, s2, s3;
int main()
{

	return 0;
}