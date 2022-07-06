#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int fac(int n)
//{
//	int ret = 1;
//	while (n >= 1)
//	{
//		ret *= n;
//		n--;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d",ret);
//	return 0;
//}
//#include<stdio.h>
//int count = 0;//全局变量
//int fib(int n)
//{
//	if (n == 3)
//		count++;//计算3就自增
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int count = 0;
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int hanoi_step(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return 2 * hanoi_step(n - 1) + 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = hanoi_step(n);
//	printf("%d\n", ret);
//	return 0;
//}
void hanoi_move(int n, char A, char B, char C)
{
	if (1 == n)
	{
		printf("%c->%c\n", A, C);
	}
	else
	{
		hanoi_move(n - 1, A, C, B);
		printf("%c->%c\n", A, C);
		hanoi_move(n - 1, B, A, C);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi_move(n, 'A', 'B', 'C');
	return 0;
}