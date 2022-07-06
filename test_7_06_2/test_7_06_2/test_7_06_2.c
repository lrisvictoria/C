#define _CRT_SECURE_NO_WARNINGS 1 
//BC133 KiKi说祝福语
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        printf("Happy new year!Good luck!\n");
//    }
//    return 0;
//}
//BC134 KiKi的最高分
#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = (a > b ? a : b);
//    max = (max > c ? max : c);
//    printf("%d", max);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (i == j)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i < 1000; i++)
    {
        int j = 0;
        int flag = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);
}