#define _CRT_SECURE_NO_WARNINGS 1 
//BC88 魔法数字变换
//3
//7
//说明：3->10->5->16->8->4->2->1。总共需要7步
//#include<stdio.h>
//int magic_change(int num)
//{
//    int count = 0;
//    while (num != 1)
//    {
//        if (num % 2 == 0)
//        {
//            num /= 2;
//            count++;
//        }
//        else
//        {
//            num = num * 3 + 1;
//            count++;
//        }
//    }
//    return count;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = magic_change(n);
//    printf("%d\n", ret);
//    return 0;
//}
//BC89 包含数字9的数
//说明：一行，一个整数，表示1~2019中共有多少个数包含数字9。

//plan1：穷举
//#include<stdio.h>
//int main()
//{
//    int count = 0;
//    for (int i = 1; i <= 2019; i++)
//    {
//        if ((i % 10) == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}
//plan2：循环
//#include<stdio.h>
//int num_nine()
//{
//    int i = 1;
//    int count = 0;
//    while (i <= 2019)
//    {
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m /= 10;
//        }
//        i++;
//    }
//    return count;
//}
//int main()
//{
//    int ret = num_nine();
//    printf("%d\n", ret);
//    return 0;
//}
//BC91 水仙花数
//153 = 1^3 + 5^3 + 3^3
//输入数据有多组，每组占一行，包括两个整数m和n
//从小到大输出，没有输出no
//100 120
//300 380
//no
//370 371
#include<stdio.h>
#include<math.h>
void Narcissus(int x, int y)
{
    int i = 0;
    int flag = 0;
    for (i = x; i <= y; i++)
    {
        int j = 0;
        int sum = 0;
        for (j = i; j > 0; j /= 10)
        {
            sum += pow(j % 10, 3);
        }
        if (i == sum)
        {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("no\n");
    }
}
int main()
{
    int m = 0;
    int n = 0;
    while (scanf("%d %d", &m, &n) == 2)
    {
        Narcissus(m, n);
    }
    return 0;
}
//BC96 [NOIP2015]金币
//6
//14
//骑士第一天收到一枚金币；第二天和第三天，每天收到两枚金币；第四、五、六天，每天收到三枚金币。因此一共收到1+2+2+3+3+3=14枚金币。
//#include<stdio.h>
//int main()
//{
//    int day = 0;//天数
//    scanf("%d", &day);
//    int sum = 0;//金币和
//    int count = 0;
//    int i = 1;
//    while (1)//决定每天金币数
//    {
//        int j = 1;
//        while (j <= i)//计算总和
//        {
//            sum += i;
//            count++;// 统计天数
//            if (count == day)
//                goto result;//天数和计数器相等，跳出循环
//            j++;
//        }
//        i++;
//    }
//result:
//    printf("%d\n", sum);
//    return 0;
//}