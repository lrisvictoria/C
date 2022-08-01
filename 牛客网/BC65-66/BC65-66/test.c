#define _CRT_SECURE_NO_WARNINGS 1 
//BC65 计算商品打折结算金额
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float n = 0;
//    scanf("%f", &n);
//    if (n >= 100 && n < 500)
//        printf("%.1f\n", n * 0.9);
//    else if (n >= 500 && n < 2000)
//        printf("%.1f\n", n * 0.8);
//    else if (n >= 2000 && n < 5000)
//        printf("%.1f\n", n * 0.7);
//    else if (n >= 5000)
//        printf("%.1f\n", n * 0.6);
//    else
//        printf("%.1f\n", n);
//    return 0;
//}
//BC66 牛牛的通勤
#include<stdio.h>
int main()
{
    float n = 0;
    scanf("%f", &n);
    if ((n / 10.0 + 10) > n)
        printf("w\n");
    else
        printf("v\n");
    return 0;
}