#define _CRT_SECURE_NO_WARNINGS 1 
//BC118 小乐乐与序列
//老师给了小乐乐一个正整数序列，
//要求小乐乐把这个序列去重后按从小到大排序。
//但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
//第一行包含一个正整数n，表示老师给出的序列有n个数。
//接下来有n行，每行一个正整数k，为序列中每一个元素的值。
//(1 ≤ n ≤ 105，1 ≤ k ≤ n)
//输出一行，为去重排序后的序列，每个数后面有一个空格。
//4
//2
//2
//1
//1
//1 2
//思路1：把每一个元素都当成0
//存数据的时候，把对应的数据存到对应的下标
//所以100001位
//最后输出不是0的数据
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int k = 0;
    int a[100001] = { 0 };//记得要初始化
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k);
        a[k] = k;
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }
    return 0;
}
//思路2：用删改的方式，但是时间过长，
//牛客网上通不过，但是还是可以的.
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[100001] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                int k = 0;
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}