#define _CRT_SECURE_NO_WARNINGS 1 
//BC86 奇偶统计
//描述：任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//输入：一行，一个正整数N。（1≤N≤100,000）
//输出：一行，1~N之间奇数的个数和偶数的个数，用空格分开。
//思路1：循环直接求解
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int even= 0;
//    int odd = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int m = i;
//        if (m % 2 == 0)
//            even++;
//        else
//            odd++;
//    }
//    printf("%d %d", odd, even);
//    return 0;
//}
//思路2：对半取
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%d %d", n / 2, n / 2);
//	}
//	if (n % 2 == 1)
//	{
//		printf("%d %d", (n / 2) + 1, n / 2);
//	}
//	return 0;
//}
//BC87 统计成绩
//输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//数据范围：1<=n<=100,成绩使用百分制且不可能出现负数
//输入：两行，
//第1行，正整数n（1≤n≤100）
//第2行，n科成绩（范围0.0~100.0），用空格分隔。
//输出：输出一行，三个浮点数，分别表示，
//最高分，最低分以及平均分（小数点后保留2位），用空格分隔。
//5
//99.5 100.0 22.0 60.0 88.5
//100.00 22.00 74.00
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    float arr[100];
//    float sum = 0;
//    float max = 0.0;
//    float min = 100.0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//        sum += arr[i];
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    printf("%.2lf %.2lf %.2lf", max, min, sum / n);
//    return 0;
//}
//BC88 有序序列插入一个数
//描述：
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//输入：共三行，
//第一行输入一个整数(0≤N≤50)。
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数。
//输出：输出为一行，N+1个有序排列的整数。
//7 
//5 30 40 50 60 70 90
//20
//5 20 30 40 50 60 70 90
//又碰到这道题了，不是我水字数....
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int num = 0;
//    scanf("%d", &num);
//    for (int i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > num)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = num;
//            break;
//        }
//    }
//    if (arr[0] > num)
//        arr[0] = num;
//    for (int i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//BC89 密码验证
//描述：用户登录网站，通常需要注册，一般需要输入两遍密码。
//请编程判断输入的两次密码是否一致，
//一致输出“same”，不一致输出“different”
//输入：每行有两个用空格分开的字符串，
//第一个为密码，第二个为重复密码。
//输出：每组输出一个字符串（“same”或“different”）。
//abc abc
//same
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s1[50];
//    char s2[50];
//    scanf("%s %s", s1, s2);
//    if (strcmp(s1, s2) == 0)
//        printf("same\n");
//    else
//        printf("different");
//    return 0;
//}
//BC90 矩阵计算
//描述：输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//输入：第一行为N M(N: 矩阵行数；M: 矩阵列数,且M,N<=10)
//，接下来的N行为矩阵各行。
//输出：一行，其中大于零的元素之和。
//3 3
//  2   3   4
//- 5 - 9 - 7
//  0   8 - 4
//17
#include<stdio.h>
int main()
{
    int arr[10][10];
    int m, n;
    scanf("%d %d", &m, &n);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > 0)
                sum += arr[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}