#define _CRT_SECURE_NO_WARNINGS 1 
//BC42 完美成绩
//KiKi想知道他的考试成绩是否完美，请帮他判断。
//从键盘输入一个整数表示的成绩，
//编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
//输入描述：多组输入，每行输入包括一个整数表示的成绩（90~100）。
//98
//perfect
#include<stdio.h>
int main()
{
    int num;
    while (scanf("%d", &num) == 1)
    {
        if (num >= 90 && num <= 100)
        {
            printf("Perfect\n");
        }
    }
    return 0;
}