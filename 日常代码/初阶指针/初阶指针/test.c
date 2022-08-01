#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;//内存开辟空间，四个字节
//	int* p = &a;//取地址，存到整形指针变量p中，存的为第一个字节的地址
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%zu", sizeof(pa));
//	printf("%zu", sizeof(pc));
//}
//指针类型对解引用的影响
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;//能放下，
//	*pa = 0;//指针类型决定了，指针类型在被解引用时，访问的权限
//	//整形指针解引用访问四个字节，字符指针解引用访问一个字节
//	return 0;
//}
// 指针类型对解引用的影响
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//能放下，
//	*pa = 0;//指针类型决定了，指针类型在被解引用时，访问的权限
//	//整形指针解引用访问四个字节，字符指针解引用访问一个字节
//	return 0;
//}
//指针类型决定指针向前或向后走的距离
//指针类型决定了看待内存的视角
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa+1);//1*sizeof(int)
//	printf("%p\n", pc+1);//1*sizeof(char)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//假设你希望，你访问这40个字节时，是以1个字节为单位访问
//	//
//	//char* pa = (char*)arr;//int*
//	//int i = 0;
//	//for (i = 0; i < 40; i++)
//	//{
//	//	*pa = 'x';
//	//	pa++;
//	//}
//	//用一个整形的方式进行访问
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0x11223344;
//		p++;
//	}
//}
//int main()
//{
//	float  n = 3.14;
//	int b = n;
//	printf("%d\n", n);
//}
//int main()
//{
//	int* p;
//	//未初始化为随机值
//	//有这块空间，但是指向的空间不属于该变量
//	//非法操作
//	*p = 20;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	printf("%d\n", a);//形参
//	return &a;
//}
//int main()
//{
//	int* p = test();//接收地址，临时变量在函数调用完之后
//	//该变量被销毁，空间被释放，访问了被释放的空间，非法访问
//	*p = 100;
//	return 0;
//}
//int main()
//{
//	int* q = NULL;//0指针无法被访问
//	//野指针 <==> 野狗
//	if (q != NULL)
//	{
//		 
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);
//	//前提：两个指针必须指向同一块空间
//	//指针 - 指针的绝对值等得到的是指针和指针之间元素的个数
//}
//my_strlen
//指针 - 指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "anduin";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//指针和数组
//当sizeof(数组名)表示整个数组，计算的是整个数组的大小
//&数组名代表整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}
//数组和指针不是一回事
//数组是一块连续的空间
//指针是存放地址的变量
//可以通过指针来访问数组
//数组名相当于指针常量
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量(一级指针)
//	int** ppa = &pa;//ppa是一个二级指针
//	int*** pppa = &ppa;//pppa是一个三级指针
//	return 0;
//}
//指针数组 - 存放指针的数组
//int main()
//{
//	//int arr1[5];//整形数组 - 存放整形额数组
//	//char ch[6];//字符数组 - 存放字符的数组
//
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 13;
//	int e = 14;
//	int* arr2[5] = { &a,&b,&c,&d,&e };//指针数组
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}
int main()
{
	int data1[5] = { 1,2,3,4,5 };
	int data2[5] = { 2,3,4,5,6 };
	int data3[5] = { 3,4,5,6,7 };
	int* arr[3] = { data1, data2, data3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", arr[i][j]);
			printf("%d ", *(arr[i] + j));
		}
		printf("\n");
	}
}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}