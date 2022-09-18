#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
//offsetof
//用来计算结构体成员相对于起始位置的偏移量
#include <stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S1 s1;
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}

//struct S3
//{
//	double d;//从0开始对齐到7位置
//	char c;//1 8 对齐位置为1的倍数，对齐到8处
//	int i;//4 8 对齐位置为4的倍数，对齐到12处，c处浪费三个字节，对齐到15结束，总大小为16
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

//设置默认对齐数
#pragma pack(4)

struct S1
{
	char c1;//从0开始对齐
	int i;//4 1 对齐数为1，对齐到1位置处
	char c2;//1 1 对齐数为1，从5开始对齐
	//最大对齐数为1，所以结构体大小为1的倍数即可
	//6，其实也就是没对
};

//恢复默认对齐数
#pragma pack()

int main()
{
	printf("%d\n", sizeof(struct S1));//6
	return 0;
}