#define _CRT_SECURE_NO_WARNINGS 1 
//BC125 小乐乐转换成绩
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 90 && n <= 100)
//        printf("A\n");
//    else if (n >= 80 && n <= 89)
//        printf("B\n");
//    else if (n >= 70 && n <= 79)
//        printf("C\n");
//    else if (n >= 60 && n <= 69)
//        printf("D\n");
//    else if (n >= 0 && n <= 59)
//        printf("E\n");
//    else
//        printf("F\n");
//    return 0;
//}
//BC126 小乐乐算多少人被请家长
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    int count = 0;
//    int arr[3] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        sum = 0;//sum的值被改变，需重置
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &arr[j]);
//            sum += arr[j];
//        }
//        if (sum / 3 < 60)
//            count++;
//    }
//    printf("%d", count);
//}
//BC127 小乐乐算最高分
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[n];
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf("%d\n", max);
//    return 0;
//}
//BC128 小乐乐计算求和
//1.
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}
//2.
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int i = 1;
//	int sum = 0;
//	while (i <= n)
//	{
//		ret *= i;
//		sum += ret;
//		i++;
//	}
//	printf("%d\n", sum);
//}