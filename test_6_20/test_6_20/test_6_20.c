#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序的优化
//void Bubblesort(int arr[], int sz)
//{
//	int flag = 1;//假设已经有序
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				int flag = 0;//无序继续排列
//			}
//			if (flag == 1)
//			{
//				break;//如果有序直接结束循环
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//BC38 变种水仙花
//变种水仙花数 - Lily Number：
//把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）,（14和61）,（146和1),
//如果所有拆分后的乘积之和等于自身，
//则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。
//思路我们看一个数字，也就是把它逐次/它的最高位*%最高位
//依次递减就可以了！
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	for (int i = 10000; i < 100000; i++)
//	{
//		if ((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)==i)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//但是上述代码过于臃肿
//我们用一下高级点的思路
//(有参考成分.....)
int main()
{
	int num;
	for (int num = 10000; num < 100000; num++)
	{
		int sum = 0;//局部变量记得初始化
		for (int i = 10; i <= 100000; i *= 10)
		{
			sum += (num / i) * (num % i);//这里我犯了好几次错误
		}
		if (sum == num)
		{
			printf("%d ", num);
		}
	}
}