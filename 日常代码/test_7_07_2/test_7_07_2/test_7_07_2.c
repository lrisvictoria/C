#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int arr1[10];//��ȷ
//char arr2[10];
//float arr3[10];
//double arr4[10];
//-------------- -
//����2��
//int count = 10;
//int arr5[count];//����
//-------------- -
//����3��
//#define MAX 100
//int main()
//{
//	int arr6[MAX];//#define ���峣��
//}
//int arr1[5] = { 1,2,3,4 };//����ȫ��ʼ��
//int arr2[5] = { 1,2,3,4,5 };//��ȫ��ʼ��
//int arr3[] = { 1,2,3,4,5 };//δ�涨�����Сʱ��������Զ�����Ԫ�ظ�����������Ĵ�С
//int arr4[5] = { 0 };//Ԫ�ر�Ĭ�ϳ�ʼ��Ϊ0
//int arr5[5] = { 1,2,3,4,5,6 };//Ԫ�ع��࣬����
//------------------------------------------------
//char ch1[] = { 'a','b','c' };
//char ch2[] = { 'a',98,'c' };//ch1�ȼ���ch2
//char ch3[] = "abc";
////ch1��ch2�Ĳ��Ϊch1��СΪ3��ch2������'\0'��Ԫ�ش�СΪ4
//------------------------------------------------
//int arr6[10];//����δ��ʼ��������Ԫ��Ϊ���ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����С
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6 };//����ȫ��ʼ��
//	printf("%d\n", arr[5]);//��������6
//	//[]�±����ò�������arr��4��[]������������
//	int i = 0;
//	//��ֵ1-10
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4 };//����ȫ��ʼ��
//	int arr2[5] = { 1,2,3,4,5 };//��ȫ��ʼ��
//	//int arr3[] = { 1,2,3,4,5 };//δ�涨�����Сʱ��������Զ�����Ԫ�ظ�����������Ĵ�С
//	//int arr4[5] = { 0 };//Ԫ�ر�Ĭ�ϳ�ʼ��Ϊ0
//	//int arr6[5];
//	//char ch1[] = { 'a','b','c' };
//	//char ch2[] = { 'a',98,'c' };//ch1�ȼ���ch2
//	//char ch3[] = "abc";
//
//	
//}
//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5,6 };//����ȫ��ʼ��
//	int arr2[3][5] = { {1,2},{4,5},{5,6} };//ָ���г�ʼ��
//	//��ÿ�п���һά���飬Ϊÿ�ж���ֵ��δ��ʼ������Ĭ�ϳ�ʼ��Ϊ0
//	int arr3[][5] = { 1,2,3,4,5,6 };//��ȷ
//	//δ�涨�У�����һ�����Ԫ�ط������ڷŵڶ���
//	int arr4[][5] = { {1,2},{4,5},{5,6} };//��arr2��ͬ
//	//int arr4[3][] = { 1,2,3,4,5,6 };//����
//	int arr5[3][5] = { 0 };
//	int arr6[3][5];
//}
//#include<stdio.h>
//int main()
//{
//	int arr[][5] = { {1,2},{4,5},{5,6} };
//	int i = 0;
//	int sz1 = sizeof(arr) / sizeof(arr[0]);//��������
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//��������
//	for (i = 0; i < sz1; i++)//������
//	{
//		int j = 0;
//		for (j = 0; j < sz2; j++)//������
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");//����
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][5] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]);//��i����10��ʱ��Խ�������
//	}
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	bubble_sort(arr);//�Ƿ������������
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%d\n", *arr);
//	printf("%d\n", sizeof(arr));
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;//���
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}