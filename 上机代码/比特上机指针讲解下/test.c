#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 a是二维数组的数组名，单独放在sizeof内部，计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(a[0][0]));//4 a[0][0]是一个整形元素，大小是四个字节
//	printf("%d\n", sizeof(a[0]));//arr[0][i]，把二维数组的每一行看作一维数组的时候，arr[0]是第一行数组名
//	//第一行数组名单独放在sizeof内部，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//a[0]放在sizeof内部时，代表着一整行，但在平常为第一行首元素地址
//	//比如arr放在sizeof内部，计算的是整个数组的大小，在平时为首元素地址
//	//所以此时a[0]为第一行首元素地址，a[0] --> &a[0][0]，
//	//a[0] + 1跳过一个int，是a[0][1]，就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//a[0] + 1是第二个元素的地址，*就是第二个元素
//	printf("%d\n", sizeof(a + 1));//a没有单独放在sizeof内部，这时a为首元素地址，二维数组的首元素为第一行
//	//a --> &a[0]，a + 1跳过一行，指向第二行，为第二行元素的地址
//	printf("%d\n", sizeof(*(a + 1)));//a + 1是第二行的地址，*(a + 1)找到就是第二行
//	//sizeof(*(a + 1))计算的就是第二行的大小
//	//*(a + 1) --> a[1]
//	//sizeof(*(a + 1)) --> sizeof(a[1])
//	printf("%d\n", sizeof(&a[0] + 1));//a[0]为第一行数组名，&a[0]就是拿到了第一行的地址
//	//&a[0] + 1 --> a + 1
//	printf("%d\n", sizeof(*(&a[0] + 1)));//&a[0] + 1是第二行的地址，*拿到的就是第二行，大小就是16个字节
//	//*(&a[0] + 1) --> a[1]
//	printf("%d\n", sizeof(*a));//a表示首元素地址，就是第一行的地址，&a[0]
//	//*a就是拿到的第一行，大小就是16个字节
//	//*a --> *(a + 0) --> a[0]，相当于把第一行数组名放在sizeof内部
//	//计算的是第一行的大小
//	printf("%d\n", sizeof(a[3]));
//	//能分析处a[3]的类型是int [4]，虽然没有第四行，但是类型能够确定，大小就是一行的大小，单位是字节
//	//a[3]有无问题？
//	//任何一个表达式有两个属性 
//	//3+5
//	//值属性：8 两个数相加结果是8
//	//类型属性：int 
//	return 0;
//}

//eg

//sizeof内部的表达式不参与运算
//只要能确定表达式的类型，sizeof就会在编译期间计算出结果
//编译期间就会把sizeof处理掉
//这时变量还没有创建，编译器根据变量类型算出结果
//根本没有机会参与表达式的计算

//int main()
//{
//	short num = 20;
//	int a = 1;
//	printf("%d\n", sizeof(num = a + 5));
//	printf("%d\n", num);
//	return 0;
//}

//而这时也不存在整形提升，因为a + 5两个都是整形，他俩直接相加
//然后相加结果，放到num中，这是已经计算出结果了，这个操作为截断
//并不需要计算


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
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//整形+1，就是+1，0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//0x00000015把它当做一个整形，+1为0x00000016
//转换成整形指针后，从地址角度上看，增加了一个字节，也相当于向后走一个字节单位
//但是不是代表它就是增加一个字节
//
//但是请注意，整数之间+1就是+1，只有当把它转化为指针时，+1后转换才是跳过一个字节

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}