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
// /*"abcdef"常量区*/
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
//所以这里比较的为首元素地址
//但是因为不是同一块空间，首元素地址也就不同，所以arr和"abcdef"并不相等
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


//数组指针


//int main()
//{
//	int a = 10;
//	int* p = &a;//整形指针 - 指向整形的指针，存放整形变量地址的
//	
//	char ch = 'w';
//	char* pc = &ch;//字符指针 - 指向字符的指针，存放的是字符变量的地址
//
//	//数组指针 - 指向数组的指针
//	int(*p2)[10];
//	
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;

	int arr[10] = { 0 };
	//数组名是首元素地址
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	return 0;
}

//要把指针数组放到数组指针中，下面该怎么放？
//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//}
// 
//数组名怎么理解？
//通常情况下，我们说的数组名都是首元素的地址
//两个例外
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
//2.&数组名，表示的是整个数组，&数组名，取出的是整个数组的地址
//

//数组指针如何使用？
//void print1(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//形参写成指针的形式
//void print1(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}

//void print1(int(*p)[10], int sz)//10必须要写上，不可省略，也不能写局部变量，元素个数决定指针走一步的步长
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//*p 相当于数组名，数组名表示首元素地址，所以*p相当于&arr[0]
//		//别扭，多此一举
//		//p是数组的地址，*p让我解引用拿到了整个数组，相当于数组名
//      //理解：平常的一个变量解引用拿到指向变量的值，而数组指针解引用应该拿到数组，
//		//只要拿到数组首元素地址，就可以通过首元素地址也就是数组名访问到这个数组的内容
//		printf("%d ", *(*p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//写一个函数打印arr的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(&arr, sz);//把数组的地址传过去
//	return 0;
//}

//void print2(int arr[3][5], int c, int r)
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int c, int r)
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			//*(p+i)[j]
//			printf("%d ", *(*(p + i) + j));
//			//p为数组指针，p原本指向第一行，+i就指向了第i行
//			//解引用p + i相当于拿到了第i行，也就是拿到了第i行的数组名
//			//数组名表示首元素地址，*(p+i)第i行第一个元素的地址
//			//+j就能拿到数组中每个元素的地址
//			//解引用便可得到每个元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//写一个函数，打印arr数组
//	print2(arr, 3, 5);//二维数组首元素地址为第一行的地址
//	//而这个地址如果想要存放的话，需要存放在数组指针中
//	//数组为五个元素，元素为int
//	//所以首元素地址可以写成int (*p)[10]，地址 + 1则可跳过五个元素，也就是一整行
//	
//	//取出二维数组的地址
//	int(*ptr)[3][5] = &arr;
//	return 0;
//}