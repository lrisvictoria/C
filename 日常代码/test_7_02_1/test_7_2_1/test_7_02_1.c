#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;//����Ϊ0
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", i);
//}
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while (n <= 3)
//	{
//		ret *= n;
//		sum += ret;
//		n++;
//	}
//	printf("%d\n", sum);
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)//ע����ں�
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
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
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	//ע��break������ͼ�����
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char str1[] = "hello-0w0-anduin!";
//	char str2[] = "#################";
//	int len = strlen(str1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[50] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "exploreranduin") == 0)
//		{
//			printf("������ȷ!\n");
//			break;
//		}
//		else
//		{
//			printf("�������,����������!\n");
//		}
//	}
//	//��ȷ or ����
//	if (i == 3)
//	{
//		printf("��������������˳�����!\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////�˵�
//void menu()
//{
//	printf("**********************************\n");
//	printf("*********** 1.play ***************\n");
//	printf("*********** 0.exit ***************\n");
//	printf("**********************************\n");
//}
////��Ϸʵ��
//void game()
//{
//	int input = 0;
//	int random_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("����������:>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	//����
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			break;
//		default:
//			printf("��ѡ�����������!\n");
//		}
//	} while (input);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�˵�
void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play ***************\n");
	printf("*********** 0.exit ***************\n");
	printf("**********************************\n");
}
//��Ϸʵ��
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	//������
	while (1)
	{
		printf("����������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));//���������
	//����
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("�˳���Ϸ\n");
			break;
		}
		default:
			printf("��ѡ�����������!\n");
			break;
		}
	} while (input);
	return 0;
}