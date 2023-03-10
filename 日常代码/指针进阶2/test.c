#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; 
//	//p是一个数组指针，指向数组10个元素，类型是int
//}
//下列代码分别是什么意思？
//int main()
//{
//	int arr[5];
//	//arr是一个整形数组，数组五个元素，元素类型是int
//	int* parr1[10];
//	//parr1是一个指针数组，数组10个元素。元素类型是int
//	int(*parr2)[10];
//	//parr2是一个数组指针，指向的数组10个元素，元素类型是int
//	int(*parr3[10])[5];
//	//parr3是数组，数组个10元素，元素类型是int(*)[5]，为数组指针
//	//parr先和[ ]结合
//	//parr3是存放数组指针的数组
//}

//形参部分为什么不能为10？
//数组名传参时本质传过去数组首元素地址，只需要个指针接收就可以了
//只要我在函数内部找到首元素地址，往后遍历数组就找到了整个数组
//所以数组传参时不会吧整个数组传过去，形参部分也不会创建一个数组来接受
//所以不需要大小，没必要！可以省略，可以胡乱写

//具体可以看看板书

//一级指针传参
//#include<stdio.h>
//void test(int* p, int sz)//一级指针接收
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(p, sz);
//}

//当一个函数的参数部分为一级指针的时候，函数能接受什么参数？
//void test(int* ptr)//明确知道形参为一级指针
//{
//	//...
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int arr[] = { 1,2,3 };
//	test(&a);//地址，妥
//	test(p);//指针变量，妥
//	test(arr);//数组名，首元素地址，妥
//	return 0;
//}

//二级指针传参
//void test(char** ppc)//二级指针接收，仅有一种写法
//{
//
//}
//int main()
//{
//	char a = 'a';
//	char* pa = &a;
//	char** ppa = &pa;//ppa就是一个二级指针
//	test(ppa);
//	
//	return 0;
//}

//当一个函数的参数部分为二级指针，函数能接受什么参数？
//void test(char** ppc)
//{
//	//...
//}
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	char** ppc = &pc;
//	char* arr[4];
//	test(&pc);//取一级指针的地址，妥
//	test(ppc);//传二级指针，妥
//	test(arr);
//	//arr是指针数组，数组4个元素，类型为char*，为一级指针
//	//一级指针传参，在函数形参部分需要用二级指针接收，妥
//
//	char arr2[3][5];//ok?
//	test(arr2);//err
//
//	return 0;
//}

////二维数组传整个数组的地址时，形参部分如何接收？
//void test(int(*p)[3][5])//指针指向一个三行五列的数组
//{
//	*p;//p为数组指针指向三行五列的二维数组
//	//解引用应该拿到这个二维数组，而拿到二维数组只需要拿到首元素地址便可访问整个数组
//	//所以说这里的*p实际上是首元素地址，也就是第一行的地址
//}
//int main()
//{
//	int arr[3][5];
//	test(&arr);//传递整个二维数组的地址 - 不常见，麻烦
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//可以存放多个[参数相同返回类型相同]的函数的地址
//	int (*pfArr[2])(int, int) = { Add,Sub };//把两个函数的地址放入函数指针数组
//	int ret1 = pfArr[0](2, 3);//pfArr[0]下标访问，拿到Add函数的地址，调用这个函数
//	int ret2 = pfArr[1](2, 3);//调用Sub函数
//	int ret3 = (*(pfArr + 0))(2, 3);//pfArr为首元素地址，首元素地址+偏移量+解引用就拿到了数组中的元素
//	int ret4 = (*pfArr)(2, 3);//也可以
//	printf("%d\n%d\n%d\n", ret1, ret2, ret4);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int x, int y) = &Add;
//	int ret = (*pf)(3, 5);
//	//*pf对指针解引用找到这个函数，再把3,5传给函数
//	//int(*pf)(int x, int y) = Add;//这样也对
//	int sum1 = Add(3, 5);
//	int sum2 = pf(3, 5);
//	printf("%d\n%d\n%d\n", ret, sum1, sum2);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);//取出数组的地址
	printf("%p\n", &Add);//取出函数的地址
	printf("%p\n", Add);//函数名，也是函数的地址
}