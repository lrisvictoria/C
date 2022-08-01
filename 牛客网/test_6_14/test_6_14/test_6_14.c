 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//有序序列插入一个数
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int num = 0;
//    scanf("%d", &arr[0]);
//    //比较次数:n+1比n次
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            int tmp = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = tmp;
//        }
//        else
//        {
//            break;
//        }
//    }
//    for (int i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num;
//	scanf("%d", &num);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (num > arr[i])
//		{
//			arr[i + 1] = num;
//			break;
//		}
//		else
//		{
//			arr[i + 1] = arr[i];
//		}
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	float k = 0.8567;
	printf("%37.1f%%", k * 100);
}