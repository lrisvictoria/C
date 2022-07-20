#define _CRT_SECURE_NO_WARNINGS 1 
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    int b = 0;
//    scanf("%d", &b);
//    int ret = func(b);
//    printf("%d\n", ret);
//}
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}
//打印3的倍数的数
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//写代码将三个整数数按从大到小输出。

//例如：
//
//输入：2 3 1
//
//输出：3 2 1
//冒泡排序
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//}
//#include<stdio.h>
//int is_leap_year(int n)
//{
//	if (n % 400 == 0 || ((n % 100 != 0) && (n % 4 == 0)))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		int ret = is_leap_year(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a % b;
//	//辗转相除法
//	while (m > 0)
//	{
//		a = b;
//		b = m;
//		m = a % b;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);//格式控制，右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//求10个数中最大值
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)//输入时直接判断
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//证明case不需要顺序
#include<stdio.h>
int main()
{
	int i = 0;
	scanf("%d", &i);
	switch (i)
	{
	case 3:
		printf("3");
		break;
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	}
}