#define _CRT_SECURE_NO_WARNINGS 1 

//BC85 牛牛学数列3
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float n = 0.0;
//    float num = 0.0;
//    scanf("%f", &n);
//    float sum = 0;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        num += pow(-1, i - 1) * (2 * i - 1);
//        sum += 1 / num;
//    }
//    printf("%.3f", sum);
//    return 0;
//}
//BC86 牛牛学数列4
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int num = 0;
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        num += i;
//        sum += num;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//BC87 数位之和
#include<stdio.h>
int num_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = num_sum(n);
    printf("%d", ret);
    return 0;
}