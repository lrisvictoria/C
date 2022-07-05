#define _CRT_SECURE_NO_WARNINGS 1 
//BC132 KiKiËãÆÚÄ©³É¼¨
#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    float score = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
    printf("%.1f", score);
    return 0;
}
