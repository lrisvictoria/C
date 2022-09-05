#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//结构体的内存对齐
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
////6 对吗？err
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
////这个又是多少？Z
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};//这个又是多少？
//
////offsetof - 宏
////结构体成员想对于起始位置的偏移量
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};//结构体嵌套情况下，结果是多少？
//#include <stddef.h>
//
//int main()
//{
//	/*printf("%u\n", offsetof(struct S3, d));
//	printf("%u\n", offsetof(struct S3, c));
//	printf("%u\n", offsetof(struct S3, i));*/
//
//	//struct S1 s1;
//	//struct S2 s2;
//	//struct S3 s3;
//	//printf("%d\n", sizeof(s1));//12
//	//printf("%d\n", sizeof(s2));//8
//	//printf("%d\n", sizeof(s3));//
//
//	printf("%d\n", sizeof(struct S4));//32
//	return 0;
//}


//为什么会存在内存对齐
//1.平台原因
//2.性能原因

//举个例子
//struct S
//{
//	char c;
//	int i;
//};
//不考虑对齐
//考虑对齐

//牺牲空间换取时间

//设计结构体时，既满足对齐，又节省空间，就让占用空间小的成员尽量集中在一起

//修改默认对齐数
//vs上默认对齐数是8

struct S
{
	char c;
	double d; 
};
int main()
{
	struct S s;
	return 0;
}