#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
/*
优点：
1.想法简单，易于实现，代码易读懂。
缺点：
1.将输入操作数的操作放在switch语句外部时，当输入错误或输入为0仍会让你输入操作数，
  退出计算器前面也会提示输入操作数，所以必须把输入操作数放到case语句内部，造成代码冗余
2.当功能越来越复杂，对于内容的修改幅度大，switch语句中的case语句越来越多，使代码不容易修改和阅读
*/
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
	return x % y;
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
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			int ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}