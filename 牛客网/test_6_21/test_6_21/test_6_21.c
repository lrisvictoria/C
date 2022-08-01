#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void Bubblesort(int arr[],int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { -3,6,9,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC39 争夺前五名
//输入：两行，第一行输入一个整数，表示n个学生（>=5），
// 第二行输入n个学生成绩（整数表示，范围0~100)
//6
//99 45 78 67 72 88
//思路：用冒泡排序，很简单
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//BC40 竞选社长
//假设你们社团要竞选社长，有两名候选人分别是A和B，
// 社团每名同学必须并且只能投一票，
// 最终得票多的人为社长.
//输入：一行，字符序列，包含A或B，输入以字符0结束。
//一行，一个字符，A或B或E，输出A表示A得票数多，
//输出B表示B得票数多，输出E表示二人得票数相等。
//ABBABBAAB0
//B 
//思路：求出长度再循环里面判定即可
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    //int len = strlen(str);
    int len = sizeof(str) / sizeof(str[0]);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A')
        {
            count1++;
        }
        else if(str[i] == 'B')
        {
            count2++;
        }
        else
        {
            break;
        }
    }
    if (count1 > count2)
    {
        printf("A");
    }
    else if (count1 < count2)
    {
        printf("B");
    }
    else
    {
        printf("E");
    }
    return 0;
}