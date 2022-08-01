#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;//不能为0
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", i);
//}
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n <= 3)
//	{
//		ret *= n;
//		sum += ret;
//		n++;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left <= right)//注意等于号
//	{
//		int mid = (left + right) / 2;//中间元素下标
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
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	//注意break，避免低级错误
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char str1[] = "hello-0w0-anduin!";
//	char str2[] = "#################";
//	int len = strlen(str1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[50] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "exploreranduin") == 0)
//		{
//			printf("输入正确!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,请重新输入!\n");
//		}
//	}
//	//正确 or 错误
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序!\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////菜单
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
////游戏实现
//void game()
//{
//	int input = 0;
//	int random_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	//输入
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("无选项，请重新输入!\n");
//		}
//	} while (input);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//菜单
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play ***************\n");
	printf("*********** 0.exit ***************\n");
	printf("**********************************\n");
}
//游戏实现
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	//猜数字
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//生成随机数
	//输入
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
			printf("无选项，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}