#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	//常量字符串存放在常量区，一旦创建好就不能被修改，是只读的
//	
//	//把abcdef常量字符串首字符a的地址放到指针变量p中
//	//证明一下，解引用*p看结果
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	//注意abcdef是常量字符串，不能被改！！！
//	*p = 'w';//程序给你崩喽
//	//所以加一个const修饰
//	//const char* p = "abcdef";
//	
//	//p是指针变量，在x86的环境下是4个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//也是指向第一个元素
//	//和常量字符串非常相似
//}

//一道笔试题
//int main()
//{
// "abcdef"常量区
//	const char* p1 = "abcdef";//p1在栈区
//	const char* p2 = "abcdef";//p2在栈区
//
//	char arr1[] = "abcdef";//创建一个arr1数组，栈区
//	char arr2[] = "abcdef";//创建一个arr2数组，栈区
//
//	//常量字符串，不能被改，内容一模一样，谁都不能被修改，
//	//那么这个字符串只需要保存一份，所以p1、p2相等
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//
//	//内存中有两个数组
//	//数组名为首元素地址，由于并不是同一块空间，所以不相等
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//}

//常量字符串不能改，字符数组可以改！！！


//?????????????????????????
//拓展一下
//之前说到过字符串比较strcmp
//用平常的等号是不能比较的，因为比较的为地址
//这里的arr数组是在栈区中开辟的一块空间，而abcdef则在常量区中，
//一般来说，常量字符串通常在使用时看起来是字符串，但是实际上操作的是常量字符串的首地址，
//这里比较的为首元素地址
//但是因为不是同一块空间，所以arr和"abcdef"并不相等
//int main()
//{
//	char arr[] = "abcdef";
//	//char* p = "abcdef";
//	if (arr == "abcdef")
//	{
//		printf("yes\n");
//	}
//	return 0;
//}

//指针数组
//存放指针的数组
//整形数组
//int arr[10];//存放整形的数组
//字符数组
//char arr2[5];//存放字符的数组

//int main()
//{
//	int* arr[10];//存放整形指针的数组
//	//看成数组名为arr，有10个int* 类型元素的数组
//	char* ch[5];//存放字符指针的数组
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	//创建一个整形指针的数组，来存放
//
//	int* arr[3] = { &a, &b, &c };//arr就是一个指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	
//	int* parr[3] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			//printf("%d ",*(parr[i] + j));
//			//parr[i]找到的指针数组的元素，是arr1数组的起始地址，通过指针偏移即可找到arr1数组中的元素
//		}
//		printf("\n");
//	}
//	return 0;
//}
