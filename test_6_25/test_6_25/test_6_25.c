#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//**************************（两道题目以及图形专题第二部分）*******************************

//BC55 简单计算器
//输入一行字符串，操作数1+运算符+操作数2 
//（其中合法的运算符包括：+、-、*、/）。
//如果操作数和运算符号均合法，则输出一个表达式，
//操作数1运算符操作数2 = 运算结果，
//各数小数点后均保留4位，数和符号之间没有空格。
//如果输入的运算符号不包括在（ + 、 - 、 * 、 / ）范围内，
//输出“Invalid operation!”。当运算符为除法运算，即“ / ”时。
//如果操作数2等于0.0，则输出“Wrong!Division by zero!”。
//int main()
//{
//    double a, b;
//    char op;
//    while (~scanf("%lf%c%lf", &a, &op, &b))
//    {
//        switch (op)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
//            break;
//        case '/':
//            if (b == 0.0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}
//BC103 金字塔图案
//多组输入
//4
//   * 
//  * *
// * * *
//* * * *
//思路：分为空格和*两部分
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = n - i-1; j > 0; j--)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC104 翻转金字塔图案
//4
//* * * * 
// * * * 
//  * * 
//   *
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = n - i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC105 菱形图案
//2
//  *
// * * 
//* * * 
// * * 
//  * 
//思路：分为上下两部分，在两部分中在分两部分
//#include<stdio.h>
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n + 1; i++)
//        {
//            for (int j = n - i; j > 0; j--)
//            {
//                printf(" ");
//            }
//            for (int j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = n - i; j > 0; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//BC12 字符圣诞树
//输出边长为5的字符圣诞树
//1
//    *
//   * *
//  * * * 
// * * * *
//* * * * *
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5 - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}