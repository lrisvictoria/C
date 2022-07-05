#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//ÇàÍÜÌøÌ¨½×
//int func(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return func(n - 1) + func(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = func(n);
//	printf("%d\n", ret);
//
//}
//ººÅµËş
//void hanoi(int n,char A,char B,char C)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n,'A','B','C');
//
//}
//int hanoi_count(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return 2 * hanoi_count(n - 1) + 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = hanoi_count(n);
//	printf("%d\n", ret);
//}