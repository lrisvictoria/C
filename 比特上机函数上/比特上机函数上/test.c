#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//��ҵ���ⲿ��
//int main()
//{
//	int d = 0;
//	scanf("%d", &d);
//	switch (d)
//	{
//	default:
//		printf("ѡ�����\n");
//		break;
//	case 1:
//		printf("1");
//		break;
//	case 0:
//		printf("2");
//		break;
//	}
//}
//������ı������ڶ���д��
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//}
//������Ϊ3���е���������÷�֧��ʽ
//˼·�������ֵ����a����Сֵ����c
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//}
//����˼·�ı䣬ʹ��a + b����ʽ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//	}
//	if (a < c)
//	{
//		a = a + c;
//		c = a - c;
//		a = a - c;
//	}
//	if (b < c)
//	{
//		b = b + c;
//		c = b - c;
//		b = b - c;
//	}
//	printf("%d %d %d", a, b, c);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	if (a < c)
//	{
//		a = a ^ c;
//		c = a ^ c;
//		a = a ^ c;
//	}
//	if (b < c)
//	{
//		b = b ^ c;
//		c = b ^ c;
//		b = b ^ c;
//	}
//	printf("%d %d %d", a, b, c);
//}

//���100 - 200������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}
//��sqrt�Ż�
//����ֻ���������п���Ϊ���������Դ�101��ʼ��ÿ��+=2
//��һ���Ż�
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)//��������
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n%d\n", count);
//}
//�����Լ��
///˼·1�����Լ�������ֵΪ��������һ����
//ֻҪ�������С��Ԫ����һ��������ȣ��������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int min = (m < n ? m : n);
//	while (1)
//	{
//		if ((m % min == 0) && (n % min == 0))
//		{
//			printf("%d", min);
//			break;
//		}
//		min--;
//	}
//}
//շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int r = 0;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//}
//��ʮ��Ԫ���е����ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[] = { -1,1,3,4,5,6,8,-10,89,100 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = arr[0];
//	scanf("%d", &max);
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}
//һ������ռ�����ַ�
//��С������/���Լ��
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int x = 0;//���Լ��
//	int y = 0;//��С������
//	//շת�����
//	int r = 0;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	x = n;
//	y = m * n / x;
//	printf("���Լ����%d����С��������%d\n", x, y);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int min = m > n ? m : n;
//	while (1)
//	{
//		if ((min % m == 0) && (min % n == 0))
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}
//�˷�����ʵ��#include<stdio.h>
void mul_table(int num)
{
	int i = 0;
	for (i = 1; i <= num; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%-2d=%-3d ", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	mul_table(n);
	return 0;
}
