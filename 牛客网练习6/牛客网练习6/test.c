#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<string.h>
//BC167 函数实现计算一个数的阶乘
//#include<stdio.h>
//long long factorial(int num)
//{
//    if (num <= 1)
//        return 1;
//    else
//        return num * factorial(num - 1);
//}
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long ret = factorial(n);
//    printf("%lld", ret);
//    return 0;
//}
//BC168 牛牛的西格玛
//#include<stdio.h>
//int sum(int num)
//{
//    if (num <= 1)
//        return num;
//    else
//        return num + sum(num - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = sum(n);
//    printf("%d", ret);
//    return 0;
//}
//BC170 牛牛的digit
//#include<stdio.h>
//#include<math.h>
//int digit(int n, int m)
//{
//    int ret = n % (int)pow(10, m);
//    return ret;
//}
//int main()
//{
//    int x = 0;
//    int i = 0;
//    scanf("%d %d", &x, &i);
//    int ret = digit(x, i);
//    printf("%d\n", ret);
//    return 0;
//}
//BC142 扫雷
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    char mine[1002][1002] = { 0 };
//    getchar();
//    int i = 0;
//    int j = 0;
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++)
//        {
//            mine[i][j] = getchar();
//        }
//        getchar();
//    }
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++)
//        {
//            if (mine[i][j] == '.')
//            {
//                char count = '0';
//                int k = 0;
//                int l = 0;
//                for (k = -1; k <= 1; k++)
//                {
//                    for (l = -1; l <= 1; l++)
//                    {
//                        if (mine[i + k][j + l] == '*')
//                        {
//                            count++;
//                        }
//                    }
//                }
//                mine[i][j] = count;
//            }
//        }
//    }
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= m; j++)
//        {
//            printf("%c", mine[i][j]);
//        }
//        printf("\n");
//    }
//}
//BC172 牛牛的排列数
#include<stdio.h>
int f(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x * f(x - 1, y - 1);
}
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    printf("%d\n", f(n, m));
    return 0;
}