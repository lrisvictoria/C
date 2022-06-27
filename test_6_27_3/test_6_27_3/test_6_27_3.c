#define _CRT_SECURE_NO_WARNINGS 1 
//BC91 成绩输入输出问题
//描述：输入10科成绩，换行显示输入的10科成绩。
//输入：一行，输入10科成绩（整数表示，范围0~100），用空格分隔。
//输出：一行，输出输入的10科成绩，用空格分隔。
//98 100 99 97 95 99 98 97 96 100
//98 100 99 97 95 99 98 97 96 100
//#include<stdio.h>
//int main()
//{
//    int arr[100];
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//BC92 逆序输出
//描述：输入10个整数，要求按输入时的逆序把这10个数打印出来。
//逆序输出，就是按照输入相反的顺序打印这10个数。
//输入：一行，输入10个整数（范围-231~231-1），用空格分隔。
//输出：一行，逆序输出输入的10个整数，用空格分隔。
//1 2 3 4 5 6 7 8 9 10
//10 9 8 7 6 5 4 3 2 1
//逆序输出并不需要排序，那么就直接倒着打印就可以了
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC93 统计数据正负个数
//描述：输入10个整数，分别统计输出正数、负数的个数。
//输入：输入10个整数（范围-231~231-1），用空格分隔
//输出：两行，第一行正数个数，第二行负数个数
//-1 2 3 -6 7 8 -1 6 8 10
//positive:7
//negative:3
//#include<stdio.h>
//int main()
//{
//    int arr[10];
//    int positive = 0;
//    int negative = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        if (arr[i] > 0)
//            positive++;
//        if (arr[i] < 0)
//            negative++;
//    }
//    printf("positive:%d\nnegative:%d\n", positive, negative);
//    return 0;
//}
//BC94 N个数之和
//描述：输入数字N，然后输入N个数，计算这N个数的和。
//输入：第一行输入一个整数N(0≤N≤50)，第二行输入用空格分隔的N个整数。
//输出：输出为一行，为第二行输入的“N个整数之和”的计算结果。
//5
//1 2 3 4 5
//15
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int arr[51];
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//BC95 最高分与最低分之差
//描述：输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//输入：两行，第一行为n，表示n个成绩，不会大于10000。
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
//输出；一行，输出n个成绩中最高分数和最低分数的差。
//10
//98 100 99 97 95 99 98 97 96 100
//5
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10000];
    int max = 0;
    int min = 100;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d\n", max - min);
    return 0;
}