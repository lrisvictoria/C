 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int isSuccess(char str[])
//{
//	if (strlen(str) != 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char str[100];
//	scanf("%s", &str);
//	int ret =isSuccess(str);
//	if (ret == 1)
//	{
//		printf("you will be succseeful!");
//	}
//	else
//	{
//		printf("oops!");
//	}
//}

//BC27 计算球体的体积
//输入半径
//输出结果
// 普通写法
//V = 4/3*πr3 π = 3.1415926
//int main()
//{
//	float r;
//	scanf("%f", &r);
//	double v;
//	v = (4 * 3.1415926 * r * r * r) / 3;
//	printf("%.3lf", v);
//	return 0;
//}
//第二种写法：pow函数
//宏定义 π
//
//#define π 3.1415926
//int main()
//{
//	float r;
//	scanf("%f", &r);
//	double v;
//	v = (4.000 * π * pow(r, 3)) / 3.000;
//	printf("%.3lf", v);
//	return 0;
//}

//BC30 KiKi和酸奶
//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，
//第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，
//并且KiKi在喝光一盒酸奶之前不会喝另一个，
//那么经过m分钟后还有多少盒未打开的酸奶？
// 多组输入，每组输入仅一行，包括n，h和m（均为整数）。
//输入数据保证m <= n * h。
//输入：8 5 16
//输出：4
//int main()
//{
//	int n, h, m;
//	int i;
//	while (scanf("%d %d %d", &n, &h, &m) == 3)//多组输入
//	{
//		//开盖喝完
//		if (m % h == 0)
//		{
//			i = n - m / h;
//			printf("%d\n", i);
//		}
//		//开盖没喝完
//		else
//		{
//			i = n - m / h - 1;
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
int main()
{
	char a = 'abcd';
	putchar(a);
	printf("\n%d", a);
}