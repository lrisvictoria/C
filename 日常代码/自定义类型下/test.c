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


#pragma pack(4)//默认对齐数被设置为4
//#pragma pack(0)//默认对齐数被设置为1
//相当于没有对齐数，此时struct S大小为9

//注意：虽然支持这样修改默认对齐数，
//但是也不要胡乱修改，一般默认对齐数修改为2^n
//机器在读取时，读取的字长为4/8个字节，
//尽量朝着适合读写的方法来设定
//struct S
//{
//	char c;
//	double d; 
//};
//#pragma pack()
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//位段
//位段的成员必须是int，unsigned int，signed int，char
struct AA
{
	int _a;
	int _b;
	int _c;
	int _d;
};
//对于_a的解释
//_a只占两个比特位，说明_a的取值范围为0~3
//两个比特位可能情况：
//00 01 10 11
// 0  1  2  3
//只要它的前面没有数字，取值范围在这个范围，就可以使用位段


//位段不存在内存对齐
//struct A
//{
//	int _a : 2;//_a这个成员只占2个bit位
//	int _b : 5;//_b这个成员只占5个bit位
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));//8
//	printf("%d\n", sizeof(struct AA));//16，四个整形，默认对齐数是8，16个字节
//	return 0;
//}

//位段的内存分配
int main()
{

	return 0;
}