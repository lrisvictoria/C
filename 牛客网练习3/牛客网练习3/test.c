#define _CRT_SECURE_NO_WARNINGS 1 
//BC153[NOIP2010]数字统计
//#include<stdio.h>
//int number_count(int x, int y)
//{
//    int count = 0;
//    while (x <= y)
//    {
//        int m = x;
//        while (m > 0)
//        {
//            if (m % 10 == 2)
//                count++;
//            m /= 10;
//        }
//        x++;
//    }
//    return count;
//}
//int main()
//{
//    int L = 0;
//    int R = 0;
//    scanf("%d %d", &L, &R);
//    int ret = number_count(L, R);
//    printf("%d\n", ret);
//    return 0;
//}
//BC154 牛牛的短信
//#include<stdio.h>
//float message_price(int m, int arr[])
//{
//    float price = 0.1 * m;
//    for (int i = 0; i < m; i++)
//    {
//        if (arr[i] > 60)
//            price += 0.1;
//    }
//    return price;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    float ret = message_price(n, arr);
//    printf("%.1f\n", ret);
//    return 0;
//}
//BC155 牛牛的素数和
//#include<stdio.h>
//#include<math.h>
//int prime_sum(int x, int y)
//{
//    int sum = 0;
//    while (x <= y)
//    {
//        int m = x;
//        int i = 0;
//        for (i = 2; i < m; i++)
//        {
//            if (m % i == 0)
//            {
//                break;
//            }
//        }
//        if (i == m)
//            sum += x;
//        x++;
//    }
//    return sum;
//}
//int main()
//{
//    int l = 0;
//    int r = 0;
//    scanf("%d %d", &l, &r);
//    int ret = prime_sum(l, r);
//    printf("%d\n", ret);
//}
//BC76[NOIP2008]ISBN号码
//#include <stdio.h>
//int main() {
//    char arr[14] = { 0 };
//    scanf("%s", &arr);
//    int sum = 0;
//    int i = 0;
//    int j = 1;
//    for (i = 0; i < 11; i++) {
//        if (arr[i] == '-')
//            continue;
//        else {
//            sum += (arr[i] - '0') * j;
//            j++;
//        }
//    }
//    sum %= 11;
//    if (sum == 10)
//        sum = 'X' - '0';
//    if (arr[12] == sum + '0')
//        printf("Right\n");
//    else
//    {
//        arr[12] = sum + '0';
//        printf("%s", arr);
//    }
//    return 0;
//}
//BC82 乘法表
#include<stdio.h>
int main()
{
    int i = 0;
    for (i = 1; i <= 9; i++)
    {
        int j = 0;
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%2d ", j, i, i * j);//2为数字宽度，正数默认向右对齐
        }
        printf("\n");
    }
    return 0;
}