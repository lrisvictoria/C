#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//二次练习部分
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i - 1; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//}
//BC107 矩阵转置
//描述：KiKi有一个矩阵，他想知道转置后的矩阵
//（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
//输入：第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
//用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
//输出：输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
//2 3
//1 2 3
//4 5 6
//1 4 
//2 5
//3 6
#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
//今天有些事耽搁了....
//明天正式开卷.......