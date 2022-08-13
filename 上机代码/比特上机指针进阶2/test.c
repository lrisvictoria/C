#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//void print(int(*p)[5], int r, int c)//数组指针接收
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//}

//int main()
//{
//	int(*parr[10])[5];
//
//
//	return 0;
//}

//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//取出数组的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//Add和&Add一样，都是函数的地址
//	//数组&arr和arr，虽然值一样，但是一个是数组的地址，一个是首元素地址
//	//那么函数呢？
//	//&为取出函数的地址，Add也是函数的地址
//	//&只是取出数组的地址让我们更加容易理解
//	//函数就是函数，拿到的就是函数的地址 
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf)(int x, int y) = &Add;
//	//让*先和pf结合，让它为一个指针
//	//若pf先和()结合就是一个函数了
//	//int 为函数的返回值
//	//()中的为函数的形参列表
//	//形参列表只需要告诉我们参数是什么类型，参数名可以省略
//	//也可以写上
//	int(*pf)(int, int) = Add;
//	return 0;
//}


//int main()
//{
//	int(*pf)(int x, int y) = &Add;
//	//那么问题来了，如何使用函数指针调用Add函数？
//	int ret = (*pf)(3, 5);
//	//*pf对指针解引用找到这个函数，再把3,5传给函数
//	int(*pf)(int x, int y) = Add;//这样也对
//	//我把Add就是函数的地址交给了pf，pf是个指针
//	//那么我既然把Add赋给pf，说明Add和pf是一样的
//	//从前我们调用函数都是这样的
//	int sum = Add(3,5);
//	//那么这不是说明我们也可以把*去掉写成这样
//	int sum = pf(3, 5);//运行一下
//	//发现可以调用
//	//那么说明这个*完全可以去掉，甚至你写成****pf都没问题
//	//这里加上*只不过让我们更好理解，对指针解引用找到指向的函数，说起来比较顺畅
//}


//int main()
//{
//	int(*pf)(int x, int y) = &Add;
//	int ret = (*pf)(3, 5);
//	//*pf对指针解引用找到这个函数，再把3,5传给函数
//	//int(*pf)(int x, int y) = Add;//这样也对
//	int sum1 = Add(3, 5);
//	int sum2 = pf(3, 5);//运行一下
//	printf("%d %d %d", ret, sum1, sum2);
//	return 0;
//}

//测验一下，自己写个函数指针
//int test(const char* str, double d)
//{
//
//}
//int main()
//{
//	int (*pt)(const char* str,double d) = &test;
//	int (*pt)(const char*, double) = &test;
//	//这里重点名字是pt，形参名字并没有用，可以不写
//
//}

//认识两个有趣的代码

//(*(void (*)())0)();
//(void(*)())0 - 把0当做一个函数的地址，把0强制类型转化为参数为无参，返回类型为void的指针
//对0地址解引用，找到0地址处的函数，并调用
// 
//把0强制类型转化成一个void(*)()类型的函数指针，然后去调用0地址处的函数
//当然去掉最左边的*也可以调用
//当然我们自己不要这么写，0地址处的我们不能访问，或者我们随便捏造一个地址，这个地址可能不是我们的


//void (*signal(int , void(*)(int)))(int);
//我的理解：
//;说明这是一个函数声明
//函数名为signal，函数的第一个参数为int，第二个参数为int，返回类型为void的函数指针
//函数signal的返回类型为函数指针，指针指向的函数，参数为int，返回类型为void
//
//鹏哥说的
//上述代码是一次函数声明
//声明的函数叫：signal
//signal函数的第一个参数是int类型
//signal函数的第二个参数是一个函数指针类型，该函数指针指向的函数参数是int，返回类型为void
//signal函数的返回类型也是一个函数指针类型，该函数指针指向的函数参数是int，返回类型为void

//这样的代码不易于我们阅读，如何简化？
//void (*)(int) signal(int, void(*)(int));
//按照我们之前写函数的经验，这样写对不对？
//前面返回类型，后面函数名+参数列表，但是这样写是错的，胡写
//上述函数的写法是固定的！！！

//我们可以用typedef类型重命名，将复杂类型命名为简单类型
//我们可以把void(*)(int)这样一个函数指针类型进行类型重命名
//int main()
//{
//	typedef void(*pf_t)(int);//语法规定，函数指针名字需要写在*旁边
//	//此时pf_t为函数指针类型
//	pf_t signal(int, pf_t);
//	//这样就简化完成了
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;
//	//把名字去掉就是函数指针类型
//	//int(*)(int, int);
//	return 0;
//}

//思维拓展
//void (**signal(int, void(*)(int)))(int);
//仅仅返回类型是一个二级的函数指针而已
//上述和上面相同
//void (*(*signal)(int, void(*)(int)))(int);
//把*放在signal旁边，说明signal是个指针

//函数指针数组
//int main()
//{
//	int* arr[5];//整形指针数组
//	//函数指针
//	int(*pf)(int, int);//指针指向一个函数函数第一个参数为int，第二个参数为int，返回类型为int
//	int(*pfArr[10])(int, int);
//	//pfArr先和[]结合，为一个数组，数组是个元素，元素类型为函数指针：int(*)(int, int)
//	return 0;
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
//	int ret3 = ( * (pfArr + 0))(2, 3);//pfArr为首元素地址，首元素地址+解引用就拿到了数组中的元素
//	int ret4 = ( *pfArr)(2, 3);//也可以
//	printf("%d %d %d", ret1, ret2, ret4);
//	return 0;
//}

//函数指针数组应用实例：简易计算器
//完成加减乘除

//指向函数指针数组
//int main()
//{
//	//函数指针
//	int(*pf)(int, int);
//	//函数指针数组：
//	int(*pfArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ptr)[5])(int, int) = &pfArr;
//	//ptr先和*结合，说明是一个指针，[]说明指向数组，数组5个元素，元素类型为int(*)(int, int)
//	return 0;
//}

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
//
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

// 二级指针传参
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
//
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
