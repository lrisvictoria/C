#define _CRT_SECURE_NO_WARNINGS 1 
//BC129 小乐乐计算函数
//#include<stdio.h>
//int max3(int a, int b, int c)
//{
//    int max = a > b ? a : b;
//    max = max > c ? max : c;
//    return max;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    float m = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}
//BC130 小乐乐查找数字
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num = 0;
    scanf("%d", &num);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            count++;
    }
    printf("%d\n", count);
    return 0;
}