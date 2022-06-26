#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//BC102 带空格直角三角形图案
//补充做法
//        *
//      * *
//    * * *
//  * * * * 
//* * * * *
//思路：
//把它看做一个二维数组，一部分打印空格，一部分打印*
//发现其特点i+j<n-1，它的坐标始终小于输入值-1
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//					printf("  ");
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//BC106 K形图案
//2
//* * * 
//* *  
//*    
//* *  
//* * *
//思路：分为上下两部分上n行和下n+1行
//注意*后面有空格
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n + 1; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            for (int j = 0; j < n + 1 - i; j++)
//            {
//                printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC107 箭形图案
//2
//    *
//  **
//***
//  **
//    *
//思路：分为上下两个部分n和n+1
//*后无空格，按照空格和*两部分处理
//int main()
//{
//	int n;
//	while (scanf("%d", &n) == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//BC108 反斜线形图案
//4
//*
// *
//  *
//   *
//思路1:空格和*两部分，由于*默认是输出一个，
//直接跟在后面打印换行即可
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//            //printf("\n");
//        }
//    }
//    return 0;
//}
//思路2：把它看做一个矩阵
//只有在对角线上也就是i==j时打印*
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC109 正斜线形图案
//4
//   *
//  *
// *
//*
//思路一：老生常谈 
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}
//思路2：矩阵思想
//i+j==n-1
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC110 X形图案
//5
//*   *
// * *
//  *
// * *
//*   *
//思路：顺着上两题矩阵的思想,从两个对角线下手
int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0;j < n; j++)
			{
				if (i + j == n - 1 || i == j)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
//以上就是图像专题的内容，此专题完结..........