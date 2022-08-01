#define _CRT_SECURE_NO_WARNINGS 1 
//BC131 KiKi学程序设计基础
//#include<stdio.h>
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//    return 0;
//}
//BC135 KiKi求质数个数
//#include<stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        int ret = is_prime(i);
//        if (ret == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//BC136 KiKi去重整数并排序
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[1001] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int k = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &k);
//        arr[k] = k;
//    }
//    for (i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			int k = 0;
			for (k = i; k < n - 1; k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;
			i--;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}