 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//BC12 字符圣诞树
//input = 1
//    1 
//   1 1
//  1 1 1
// 1 1 1 1
//1 1 1 1 1
//分析：五行
//#include<stdio.h>
//int main()
//{
//	char c;
//	scanf("%c", &c);
//	for (int i = 1; i < 6; i++)//5次
//	{
//		for (int j = 5 - i; j > 0; j--)//第一行4个
//		{
//			printf(" ");//打印空格
//		}
//		for (int j = 0; j < i; j++)
//		{
//			printf("%c ", c);//打印字符记得带空格
//		}
//		printf("\n");//每一行打印结束后换行
//	}
//	return 0;
//}
//BC13 ASCII码 - i can do it !
//将如下数字转化成字符输出
//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33
//用直接打印当然可以解决问题，让我们让他复杂一点
//int main()
//{
//	char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", ch[i]);
//	}
//	return 0;
//}
//int main()
//{
//    int year, month, date;
//    scanf("%4d%02d%2d", &year, &month, &date);//使用格式字符串%0，使得空位置自动填充0
//    //不加格式控制字符串会出现奇怪的现象
//    printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);
//    return 0;
//}
//BC15 按照格式输入并交换输出
//a=1,b=2
//a=2,b=1
//思路1：传址调用 - 本质上改变a,b两个的值
//
//#include<stdio.h>
//void Swap(int* pa, int* pb)
//{
//    int tmp = *pa;
//    *pa = *pb;
//    *pb = tmp;
//
//}
//int main()
//{
//    int a, b;
//    scanf("%d,%d", &a, &b);
//    Swap(&a, &b);
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}
//BC20 kiki算数 - 傻傻的kiki
//问题：KiKi今年5岁了，已经能够认识100以内的非负整数，
//并且并且能够进行 100 以内的非负整数的加法计算。
//不过，BoBo老师发现KiKi在进行大于等于100的正整数的计算时，规则如下：
//1.只保留该数的最后两位，例如：对KiKi来说1234等价于34；
//2.如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，
//如果此两位中十位为0，则只保留个位。
//例如：45 + 80 = 25
//要求给定非负整数 a和 b，模拟KiKi的运算规则计算出 a + b 的值。
//*******************************************************
//思路两数相加，既然kiki只认得后面两位，那么就把之前的%100就好啦
//int main()
//{
//    int num1, num2;
//    scanf("%d %d", &num1, &num2);
//    printf("%d", (num1 + num2) % 100);
//    return 0;
//}
//-----------------------------------------
//BC21 浮点数的个位数字
//输入：13.431
//输出：3
//#include<stdio.h>
//int main()
//{
//    //这里我理解错了，是个位数，不是小数后位数
//    //
//    float n;
//    scanf("%f", &n);
//    printf("%d\n", (int)n % 10);
//    return 0;
//}
//?
//#include<stdio.h>
//int main()
//{
//    int age;
//    scanf("%d", &age);
//    long seconds = age * 31560000;
//    printf("%ld\n", seconds);
//    return 0;
//}