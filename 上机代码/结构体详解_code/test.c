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
//#pragma pack(1)
//
//struct S1
//{
//	char c1;//从0开始对齐
//	int i;//4 1 对齐数为1，对齐到1位置处
//	char c2;//1 1 对齐数为1，从5开始对齐
//	//最大对齐数为1，所以结构体大小为1的倍数即可
//	//6，其实也就是没对
//};
//
////恢复默认对齐数
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//6
//	return 0;
//}

//struct S
//{
//    int data[1000];
//    int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//    printf("%d\n", s.data[0]);//结构体变量.结构体成员访问结构体成员
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//    printf("%d\n", (*ps).data[0]);//*ps访问到结构体，结构体变量.操作符访问成员
//    printf("%d\n", ps->data[0]);//结构体指针->结构体成员访问成员
//}
//int main()
//{
//    struct S ss = { { 1, 2, 3, 4, 5 }, 100 };
//    print1(ss); //传结构体
//    print2(&ss); //传地址
//    return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%zu\n", sizeof(struct S3));
//	
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//    char c1;
//    struct S3 s3;
//    double d;
//};
//int main()
//{
//	printf("%zu\n", sizeof(struct S4));
//	return 0;
//}

#pragma pack(1)

struct S1
{
	char c1;//从0开始对齐
	int i;//4 1 对齐数为1，对齐到1位置处
	char c2;//1 1 对齐数为1，从5开始对齐
	//最大对齐数为1，所以结构体大小为1的倍数即可
	//6，其实也就是没对齐
};

#pragma pack()

int main()
{
	printf("%d\n", sizeof(struct S1));//6
	return 0;
}