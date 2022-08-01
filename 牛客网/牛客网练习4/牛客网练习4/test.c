#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    float sum = 0.0;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("%.6f", sum);
    return 0;
}