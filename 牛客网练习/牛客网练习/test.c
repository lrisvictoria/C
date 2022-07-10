#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//BC40 牛牛的等差数列
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = 0;
//    c = b + (b - a);
//    printf("%d", c);
//    return 0;
//}
//BC41 牛牛的球
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int r = 0;
//    scanf("%d", &r);
//    float v = 0.0;
//    v = 4.0 / 3.0 * 3.14 * pow(r, 3);
//    printf("%.2f", v);
//    return 0;
//}
//BC48 牛牛的线段
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x1 = 0;
//    int x2 = 0;
//    int y1 = 0;
//    int y2 = 0;
//    scanf("%d %d", &x1, &y1);
//    scanf("%d %d", &x2, &y2);
//    int distance = 0;
//    int a = pow((x1 - x2), 2);
//    int b = pow((y1 - y2), 2);
//    distance = a + b;
//    printf("%d\n", distance);
//    return 0;
//}
//BC54 牛牛的判断题
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    int l = 0;
//    int r = 0;
//    scanf("%d %d %d", &x, &l, &r);
//    if (x >= l && x <= r)
//        printf("true\n");
//    else
//        printf("false\n");
//    return 0;
//}
//BC55 判断闰年
//#include<stdio.h>
//int is_leap_year(int year)
//{
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = is_leap_year(n);
//    if (ret == 1)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}
//BC57 四季
//#include<stdio.h>
//int main()
//{
//    int data = 0;
//    scanf("%d", &data);
//    int n = data % 100;
//    if (n >= 3 && n <= 5)
//        printf("spring\n");
//    else if (n >= 6 && n <= 8)
//        printf("summer\n");
//    else if (n >= 9 && n <= 11)
//        printf("autumn\n");
//    else
//        printf("winter\n");
//    return 0;
//}
//BC61 牛牛的二三七整除
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 2, 3, 7 };
//    int n = 0;
//    int flag = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < 3; i++)
//    {
//        if (n % arr[i] == 0)
//            printf("%d ", arr[i]);
//        else
//            flag++;
//    }
//    if (flag == 3)
//        printf("%c ", 'n');
//    return 0;
//}
//BC64 牛牛的快递
#include<stdio.h>
#include<math.h>
int main()
{
    float a = 0;
    char b = 0;
    int sum = 20;
    int c = 0;
    scanf("%f %c", &a, &b);
    if (a <= 1)
    {
        sum = 20;
    }
    else if (a > 1)
    {
        c = ceil(a - 1);
        sum += c;
    }
    if (b == 'y')
        sum += 5;
    printf("%d\n", sum);
    return 0;
}