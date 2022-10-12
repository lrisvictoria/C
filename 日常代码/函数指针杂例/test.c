#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int main()
{
	int (*pa[2])(int, int) = { Add , Sub};
	printf("%p\n", pa[0]);
	printf("%p\n", Add);
	printf("%p\n", &Add);

	return 0;
}

// 函数指针，指向的是一个函数
// 函数指针数组，每个元素为函数的地址
// pa是一个函数指针数组，数组元素为Add的地址
// 那么pa[0]就是函数Add的地址
// &Add也是函数的地址
// Add也是函数的地址
// &只是为了让我们更好理解

// 但是经过调试我发现一个问题：
// 为什么pa[0]的值和Add/&Add的值不一样？
// 这是规则转换了
// 因为函数真正调用的时候，其实不是直接用的函数的地址
// 它中间其实还存在着一些转换
// 目前不必深究

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
//	printf("%d\n%d \nd\n", ret1, ret2, ret4);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* arr[2] = { &a, &b };
//
//	printf("%p\n", &a);
//	printf("%p\n", arr[0]);
//}

