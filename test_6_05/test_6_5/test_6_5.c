 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//反转字符串
//void ReverseString(char* p, int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	char t;
//	if (sz == 0 || sz == 1)
//	{
//		p = p;
//	}
//	while (start < end)
//	{
//		char t = p[start];
//		p[start] = p[end];
//		p[end] = t;
//		start++;
//		end--;
//	}
//	printf("%s\n", p);
//}
//int main()
//{
//	char str[20];
//	scanf("%s", &str);
//	int len = strlen(str);
//	ReverseString(str, len);
//
//	return 0;
//}
//有序序列插入一个数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	for (int i = 1; i <= n; i++)//i = n多了一位
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &arr[0]);//插入的元素放在首位
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//矩阵计算
//#include<stdio.h>
//int main()
//{
//    int N = 0;
//    int M = 0;
//    int sum = 0;
//    scanf("%d %d", &N, &M);
//    int arr[10][10];
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < M; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//他的思想其实就是呃，我找到比这个数字要插入的位置是这样的，
//就是我找到了这个数字要插入的位置之后，然后呢，
//我爸他这个数字之后的数字全部向后移动一个位置，
//然后把数据插入进来，这样子的，把后边的数据全部向后移动一个位置这么一个意思。
int main()
{
	int n;
	scanf("%d", &n);
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		scanf("")
	}
}