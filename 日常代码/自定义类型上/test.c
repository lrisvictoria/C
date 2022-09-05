#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//c语言仅仅存在简单类型是无法描述复杂对象的
//所以我们需要自定义类型来讲它们组合起来

//自定义类型包括结构体，枚举，联合体

//struct tag
//{
//	member - list;//成员列表
//}variable-list;//变量列表(全局变量)

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//}s1, s2, s3;
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[12];
//};
//
////匿名结构体 如何使用？
//struct
//{
//	char name[20];
//	float price;
//	char id[12];
//}sw;//只能使用一次，只能在这里创建，且这个变量为全局变量
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;//结构体数组，结构体指针
//struct
//{
//	int a;
//	char b;
//	float c;
//}ss;
////匿名结构体的成员如果一样，在编译器看来也是不同类型的结构体
//int main()
//{
//	struct Stu s1, s2;
//	struct Book p1;
//
//	p = &ss;//按理说结构体的地址放到结构体指针，且他们为匿名结构体，可能会相同
//	//编译一下，发现两个匿名结构体变量类型并不相同
//	return 0;
//}

//当一个结构体只想用一次时就可以使用匿名结构体

//结构体的自引用
//struct Node
//{
//	int data;//数据
//	struct Node* next;//下一个节点的地址
//};


//typedef struct Node//typdef对struct Node 进行类型重命名
//{
//	int data;
//	struct Node* next;
//}Node, *pNode;//重命名后名字为Node
//
////pNode --> struct Node*
//
////匿名结构体可以重命名吗？
//typedef struct
//{
//	int data;
//	//Node* next;//错误 这里用的是对其重命名之后的类型，这时匿名结构体还未定义
//}name;
//int main()
//{
//	struct Node n1;
//	Node n2;//ok
//	
//	name q1;//匿名结构体重命名后创建变量
//	return 0;
//}


//创建结构体变量
struct Book
{
	char name[20];
	float price;
	char id[12];
}s = {"clanguage", 38.8f, "ad1001"};//全局

//结构体嵌套
struct Node
{
	struct Book b;
	struct Node* next;
};
int main()
{
	struct Book s2 = { "datastruct", 66.6f, "in2001" };//局部
	struct Node n = { {"country", 78.8f, "un3001"}, NULL };//嵌套形式的初始化
	
	return 0;
}