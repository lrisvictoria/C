#define _CRT_SECURE_NO_WARNINGS 1 
/*
优点：
1.代码大幅度减少
2.增加功能时只需要定义函数，在函数指针数组中增加该函数地址即可
缺点：
1.需要对函数指针数组有一定了解
*/
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*************************\n");
	printf("****** 1.add 2.sub ******\n");
	printf("****** 3.mul 4.div ******\n");
	printf("********* 0.exit ********\n");
	printf("*************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//函数指针数组 - 转移表 - 就像一个跳板的功能
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };//增加一个元素0，将input输入和相关功能对应起来
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
			break;
		}
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);//pfArr[input]访问数组元素，找到函数地址，调用函数
			printf("%d\n", ret);
		}
		else
		{
			printf("选择错误，请重新选择:>\n");
		}
	} while (input);
	return 0;
}