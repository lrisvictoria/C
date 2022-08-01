#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int arr1[10];//正确
//char arr2[10];
//float arr3[10];
//double arr4[10];
//-------------- -
//样例2：
//int count = 10;
//int arr5[count];//错误
//-------------- -
//样例3：
//#define MAX 100
//int main()
//{
//	int arr6[MAX];//#define 定义常量
//}
//int arr1[5] = { 1,2,3,4 };//不完全初始化
//int arr2[5] = { 1,2,3,4,5 };//完全初始化
//int arr3[] = { 1,2,3,4,5 };//未规定数组大小时，数组会自动根据元素个数算作数组的大小
//int arr4[5] = { 0 };//元素被默认初始化为0
//int arr5[5] = { 1,2,3,4,5,6 };//元素过多，报错
//------------------------------------------------
//char ch1[] = { 'a','b','c' };
//char ch2[] = { 'a',98,'c' };//ch1等价于ch2
//char ch3[] = "abc";
////ch1和ch2的差别为ch1大小为3，ch2引起有'\0'的元素大小为4
//------------------------------------------------
//int arr6[10];//数组未初始化，所含元素为随机值
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算大小
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };//不完全初始化
//	printf("%d\n", arr[5]);//输出结果：6
//	//[]下标引用操作符，arr和4是[]的两个操作符
//	int i = 0;
//	//赋值1-10
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4 };//不完全初始化
//	int arr2[5] = { 1,2,3,4,5 };//完全初始化
//	//int arr3[] = { 1,2,3,4,5 };//未规定数组大小时，数组会自动根据元素个数算作数组的大小
//	//int arr4[5] = { 0 };//元素被默认初始化为0
//	//int arr6[5];
//	//char ch1[] = { 'a','b','c' };
//	//char ch2[] = { 'a',98,'c' };//ch1等价于ch2
//	//char ch3[] = "abc";
//
//	
//}
//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5,6 };//不完全初始化
//	int arr2[3][5] = { {1,2},{4,5},{5,6} };//指定行初始化
//	//把每行看错一维数组，为每行都赋值，未初始化部分默认初始化为0
//	int arr3[][5] = { 1,2,3,4,5,6 };//正确
//	//未规定行，当第一行五个元素放满后，在放第二行
//	int arr4[][5] = { {1,2},{4,5},{5,6} };//与arr2相同
//	//int arr4[3][] = { 1,2,3,4,5,6 };//错误
//	int arr5[3][5] = { 0 };
//	int arr6[3][5];
//}
//#include<stdio.h>
//int main()
//{
//	int arr[][5] = { {1,2},{4,5},{5,6} };
//	int i = 0;
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//计算行数
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//计算列数
//	for (i = 0; i < sz1; i++)//控制行
//	{
//		int j = 0;
//		for (j = 0; j < sz2; j++)//控制列
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//换行
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);//当i等于10的时候，越界访问了
//	}
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//这样对吗？
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	bubble_sort(arr);//是否可以正常排序？
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%d\n", *arr);
//	printf("%d\n", sizeof(arr));
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;//标记
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}