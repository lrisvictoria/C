#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;//pa是指针变量，存放的是a的地址
//	int* pb = &b;//pb是指针变量，存放的是b的地址
//	int** ppa = &pa;//ppa是二级指针，存放的是指针变量pa的地址
//	*ppa = &b;//解引用ppa，找到的是pa，将pa的值从a的地址改为b的地址
//	ppa = &pb;//将ppa的值从pa的地址赋值为pb的地址
//	//pa的地址是编译器指派的值，不能被修改，也无法修改
//	//若修改ppa，则修改的为ppa中的值，pa的地址不会改变
//	//若修改pa，则修改的是指针变量pa中的值，pa的地址也不会发生改变
//	//所以pa也是无法被修改
//
//	int c = **ppa;//*ppa找到pa也就是&a，*解引用得到a
//	//int c = *(*ppa)也行，比较容易理解
//	printf("%d  %d", **ppa, c);
//	//二级指针里面存放的是一级指针的地址！！！
//	return 0;
//}



//int main()
//{
//	int arr[2][3] = { {1,2,3},{2,3,4} };
//	int* p = arr;
//	//二维数组的首元素地址是arr[0][0]的地址
//}
//注：二维数组的数组名和二级指针是两码事。
//struct S
//{
//	char name[20];
//	int arr[5];
//};
//int main()
//{
//	struct S ss = { "anduin",{2,4,6,8,10} };
//	printf("%s", ss.name);
//	int i = 0;
//	ss.arr = { 1,2,3,4,5 };
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ss.arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		ss.arr[i] = i;
//		printf("%d ", ss.arr[i]);
//	}
//}


//struct point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char c;
//	struct point p;
//	double d;
//	char str[20];
//};
//int main()
//{
//	struct S ss = { .d = 3.14,.c = 'x' ,.p.x = 3};
//	//不完全初始化，其他元素默认初始化为0
//	//只初始化某些成员或乱序初始化时的时候用这种方法
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//}

//struct Point
//{
//	int x;
//	int y;
//}p1 = { 1,2 };
//struct S
//{
//	char c;
//	struct Point sp;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Point p = { 100,200 };
//	struct S ss = { 'x',{10,11},3.14,"anduin" };//完全初始化
//	struct S sss = { .sp.x = 100, .c = 'w', .d = 3.14 };
//	//不完全初始化，其他元素默认初始化为0
//	//只初始化某些成员或乱序初始化时的时候用这种方法
//	printf("%c %d %d %lf %s\n", ss.c, ss.sp.x, ss.sp.y, ss.d, ss.arr);
//	printf("%c %d %d %lf %s\n", sss.c, sss.sp.x, sss.sp.y, sss.d, sss.arr);
//	
//	*(ss.arr) = "liuxuan";//也是不行的
//	//数组名是首元素地址，而arr是char*类型的，解引用一次只能访问一个字节的空间，放不下！
//	//s.arr = "liuxuan";//errpr
//	//arr是数组名，是首元素地址，我虽然可以s.arr通过首元素地址访问到这个数组
//	//但是地址是一个常量并不能被修改，它是一串编号而不是空间
//	//所以放进去是不行的，且常量不能被修改
//	//应该将要修改的内容放到相应的数组里面去，用strcpy库函数
//	strcpy(ss.arr, "liuxuan");
//	return 0;
//}


//结构体传值时，实参结构体的地址可能和形参结构体的地址相同，
//编译器可能不回创建临时空间，自己进行了优化，我们使用的空间依然可能是实参的空间
//所以结构体传址为了避免这些乱七八糟的优化，我们还是选择传地址