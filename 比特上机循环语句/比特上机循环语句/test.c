#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	while (n > 0)
//	{
//		ret *= n;
//		n--;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n <= 10)
//	{
//		ret *= n;
//		sum += ret;
//		n++;
//	}
//	printf("%d\n", sum);
//}
//void binary_search(int arr[], int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ����±���%d\n",mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	binary_search(arr, sz, k);
//}
//#include<windows.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###########";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//˯�ߺ��� - ֹͣx����
//		Sleep(1000);//1000���� <==> 1��
//		system("cls");//����
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//}
//C���������ַ�������
//C���������ַ���������û��
//int main()
//{
//	char password[20];
//	scanf("%s", password);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (strcmp(password, "anduin") == 0)
//		{
//			printf("ȷ�ϳɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("ȷ��ʧ�ܣ�����������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("���������Σ��˳�ҳ��\n");
//	}
//	return 0;
//}
//�ַ����ȽϿ�һ��
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("����������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//again:
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			goto again;
//			break;
//		}
//	} while (input);
//}