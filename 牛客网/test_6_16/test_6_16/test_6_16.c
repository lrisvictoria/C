#define _CRT_SECURE_NO_WARNINGS 1
//有序序列插入数据两种方式的二次练习
#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100];
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num;
//	scanf("%d", &arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		int tmp;
//		if (arr[i] > arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int num;
	scanf("%d", &num);
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] > num)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = num;
			break;
		}
	}
	for (int i = 0; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
}