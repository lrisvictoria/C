#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//BC81 学好C++
//int main()
//{
//    printf("I will learn C++ well!");
//    return 0;
//}
//BC82 (a+b-c)*d的计算问题
//输入：输入为一行，用空格分隔的四个整数a、b、c、d
//输出：输出为一行，为“(a+b-c)*d”的计算结果。
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%d", (a + b - c) * d);
//    return 0;
//}
//BC83 被5整除问题
//判断一个整数是否能5整除是一个挺简单的问题，
//输入：输入包括一个整数M（1≤M≤100,000）。
//输出：输出包括一行，如果M可以被5整除就输出YES，
//否则输出NO（结果大小写敏感）。
//10
//YES
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
//BC84 计算y的值
//描述：已知一个函数y=f(x)，
//当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//输入：一行，输入一个整数x。
//输出：一行，输出y的值。
//10
//-1
//#include<stdio.h>
//int main()
//{
//    int x;
//    int y;
//    scanf("%d", &x);
//    if (x > 0)
//    {
//        y = -1;
//        printf("%d\n", y);
//    }
//    else if (x == 0)
//    {
//        y = 0;
//        printf("%d\n", y);
//    }
//    else
//    {
//        y = 1;
//        printf("%d\n", y);
//    }
//    return 0;
//}
//BC85 包含数字9的数
//描述：今年是2019年，KiKi想知道1~2019中有多少个包含数字9的数。
//包含数字的数是指有某一位是“9”的数，例如“2019”、“199”等。
//输入：无
//输出：一行，一个整数，表示1~2019中共有多少个数包含数字9。
//思路1：通过循环解决，如果m%10==9，count++，然后break，结束此次循环
//如果没有，那么就/10，因为有91，之类的存在
//再者当中要用由于处理的数和第一层循环的临时变量相同，容易引起错误
//于是创建一个临时变量来存储i的值
//#include<stdio.h>
//int main()
//{
//	
//	int count = 0;
//	for (int i = 1; i <= 2019; i++)
//	{
//		int m = i;
//		while (m > 0)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			else
//				m /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//思路2：暴力枚举
//(i % 10)处理个位、十位
//(i / 10) % 10处理百位
//(i / 100) % 10
#include<stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 2019; i++)
    {
        if ((i % 10) == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9)
            count++;
    }
    printf("%d\n", count);
    return 0;
}