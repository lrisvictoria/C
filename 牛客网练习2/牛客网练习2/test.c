#define _CRT_SECURE_NO_WARNINGS 1 
//BC67 牛牛的金币
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    int y = 0;
//    int x1 = 0;
//    int y1 = 0;
//    scanf("%d %d", &x, &y);
//    scanf("%d %d", &x1, &y1);
//    if (x == x1 && y1 - y == 1)
//        printf("u\n");
//    else if (x == x1 && y1 - y == -1)
//        printf("d\n");
//    else if (y == y1 && x1 - x == 1)
//        printf("r\n");
//    else if (y == y1 && x1 - x == -1)
//        printf("l\n");
//    return 0;
//}
//BC68 牛牛的一周
//#include<stdio.h>
//int main()
//{
//    int date = 0;
//    scanf("%d", &date);
//    switch (date)
//    {
//    case 1:
//        printf("Monday\n");
//        break;
//    case 2:
//        printf("Tuesday\n");
//        break;
//    case 3:
//        printf("Wednesday\n");
//        break;
//    case 4:
//        printf("Thursday\n");
//        break;
//    case 5:
//        printf("Friday\n");
//        break;
//    case 6:
//        printf("Saturday\n");
//        break;
//    case 7:
//        printf("Sunday\n");
//        break;
//    }
//    return 0;
//}
//BC72 牛牛的计划
//#include<stdio.h>
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int d = 0;
//    int y1 = 0;
//    int m1 = 0;
//    int d1 = 0;
//    scanf("%d %d %d", &y, &m, &d);
//    scanf("%d %d %d", &y1, &m1, &d1);
//    if (y < y1)
//    {
//        printf("yes\n");
//    }
//    else if (y == y1)
//    {
//        if (m < m1)
//        {
//            printf("yes\n");
//        }
//        else if (m == m1)
//        {
//            if (d > d1)
//                printf("no\n");
//            else
//                printf("yes\n");
//        }
//        else
//        {
//            printf("no\n");
//        }
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}
//BC151 数位五五
//#include<stdio.h>
//int is_five(int x, int y)
//{
//    int count = 0;
//    int sum = 0;
//    while (x <= y)
//    {
//        int m = x;
//        sum = 0;
//        while (m != 0)
//        {
//            int i = m % 10;
//            sum += i;
//            m /= 10;
//        }
//        if (sum % 5 == 0)
//            count++;
//        x++;
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int ret = is_five(a, b);
//    printf("%d\n", ret);
//    return 0;
//}
//BC152 The Biggest Water Problem
#include<stdio.h>
int water_problem(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = water_problem(n);
    while (ret >= 10)
    {
        ret = water_problem(ret);
    }
    printf("%d\n", ret);
    return 0;
}