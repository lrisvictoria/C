#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	while (n > 0)
//	{
//		ret *= n;
//		n--;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n <= 10)
//	{
//		ret *= n;
//		sum += ret;
//		n++;
//	}
//	printf("%d\n", sum);
//}
//void binary_search(int arr[], int sz, int k)
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
//			printf("找到了下标是%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	binary_search(arr, sz, k);
//}
//#include<windows.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//睡眠函数 - 停止x毫秒
//		Sleep(1000);//1000毫秒 <==> 1秒
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//}
//C语言中有字符串吗？有
//C语言中有字符串类型吗？没有
//int main()
//{
//	char password[20];
//	scanf("%s", password);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (strcmp(password, "anduin") == 0)
//		{
//			printf("确认成功\n");
//			break;
//		}
//		else
//		{
//			printf("确认失败，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("已输入三次，退出页面\n");
//	}
//	return 0;
//}
//字符串比较看一下
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//again:
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			goto again;
//			break;
//		}
//	} while (input);
//}