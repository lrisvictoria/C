#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//void test()
//{
//	return 0;
//}
//int main()
//{
//	int ret = test();//报错
//}
//函数如果不写返回值，函数默认会返回一个值
//有些编译器上返回的是最后一条指令执行产生的结果
//int test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//
//	//漏掉返回值有什么危害？
//	//返回的值可能不是你想要的
// 如果你想要返回一个a，但是你返回了c
//}
//int main()
//{
//	printf("%d\n", test());//29
//	return 0;
//}
//void Add(int* p)
//{
//	//(*p)++;//解引用后++
//	*p += 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//}
//int main()
//{
//	int num = 0;
//	printf("%d\n", Add(num));
//	printf("%d\n", Add(num));
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 3;
//	int num = 0;
//	scanf("%d", &num);
//	while (num > 0 && i > 0)
//	{
//		arr[i] = num % 10;
//		num /= 10;
//		i--;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//当函数没有被调用时，形参会不会在内存中开辟空间？
//不会，函数调用时才会进行传参，才会创建形式参数，不调用也没有参数，
//函数的定义就是告诉你可以创建两个形式参数，但是他没有真正创建
//大部分为形式上的存在
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m= get_max(a,b);
//	printf("%d\n", m);
//}
//当打开监视窗口看到max的地址，这个地址是告诉我们调用时通过这个地址调用
//并不是分配空间
//问题遗留：老师，当一个函数被定义，但并没有调用，当程序运行起来，这种情况被定义函数是不占用内存的吧？
//函数实现的那些指令也是要占内存的只不过没有被调用则没有函数调用栈的这些开销...

//arr,10可以在函数内部向后观察10个元素
//数组传参，为了节省开销，传参传的是首元素的地址，方便后续找到元素
//例：
//这里写成数组只不过让人更加好理解！
//数组传参传的是首元素地址，不可能将整个数组传入

//#include<stdio.h>
//int binary_search(int arr[], int sz, int k)
////int binart_search(int* arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return - 1;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int ret = binary_search(arr, sz, k);
//	if (ret == -1)
//		printf("没找到\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//	return 0;
//}

//使用num的方式实现每调用一次 + 1
//int Add(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);
//	num = Add(num);
//	printf("%d\n", num);
//}
 
//函数的声明和定义
//报警告
//为什么？函数从前往后扫描，扫描时没见过Add函数，
//但是这个函数找到了，编译器在前面没见过，所以报一个警告

//只需要声明一下就可以
//声明放在使用函数之前就可以！
//int Add(int, int);//只需要告诉函数名，有几个参数，参数类型和返回值
//参数名只要在函数定义中使用就好，但在这里使用没问题
//int Add(int x, int y);  
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//声明
//	//int Add(int, int);//也可以
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

//vs是编译器吗？是集成开发环境 IDE
//编辑器，编译器，调试器，链接器
//#include"add.h"//引一下头文件 
//#pragma comment(lib,"zs_add.lib")//固定格式
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}
//想象一下，不用多文件，数据是不是就泄露了？

//当引用相关头文件的时候，相当于把头文件中的内容拷贝一份过来 
//相当于形成了函数声明