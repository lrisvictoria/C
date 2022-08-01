#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[20];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	printf("hello world!\n");
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 2; i++)
//	{
//		printf("     **     \n");
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		printf("************\n");
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		printf("    *  *    \n");
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	printf("你是傻逼吗？->选择(1/0)");
//	scanf("%d", &i);
//	if (i == 1)
//	{
//		printf("你是个大傻逼！\n");
//	}
//	else
//	{
//		printf("你是个老逼登!\n");
//	}
//	return 0;
//}
//struct student
//{
//	char name[20];
//	int age;
//	int num;
//	char place[30];
//};
//int main()
//{
//	struct student s = { "fenggaofei",12,10086,"地球" };
//	printf("%s %d %d %s", s.name, s.age, s.num, s.place);
//	return 0;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d\n", i);
//		count++;
//		printf("%d\n", count);
//	}
//	return 0;
//}
int main()
{
	int i;
	printf("请输入一个整数:>1/0\n");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("大学物理真的很难\n");
		printf("希望我能通过\n");
	case 0:
		printf("加油\n");
		break;
	default:
		printf("输入数字有误，请重新选择！\n");
	}
	return 0;
}