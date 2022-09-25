#define _CRT_SECURE_NO_WARNINGS 1 
/*
优点：
1.封装calc函数，通过在switch...case语句中调用calc，传递函数的地址，
  在calc内通过函数指针调用对应的函数时，该函数就被称为回调函数
  如，通过函数指针p去调用指针指向的Add函数时，Add就被称为回调函数
  利用回调函数，避免了代码的冗余，简洁明了
缺点：
1.需要对回调函数有一定了解
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
void calc(int(*p)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:>");
	scanf("%d %d", &x, &y);
	ret = p(x, y);//p为函数指针，为函数的地址，调用函数
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);//传参Add函数的地址
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
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