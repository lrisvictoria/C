#define _CRT_SECURE_NO_WARNINGS 1 

#include<stdio.h>
//pow�����ĵݹ�ģ��ʵ��
//ע�⸺��
//plan1��
//double power(double x, int y)
//{
//	if (y < 0)
//		return 1.0 / (x * power(x, - y - 1));
//	else if (y == 0)
//		return 1;
//	else
//		return x * power(x, y - 1);
//}
//int main()
//{
//	double n = 0;
//	int k = 0;
//	scanf("%lf %d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//plan2��
//double power(double x, double y)
//{
//	if (y < 0)
//		return 1.0 / power(x, -y);
//	else if (y == 0)
//		return 1;
//	else
//		return x * power(x, y - 1);
//}
//int main()
//{
//	double n = 0;
//	int k = 0;
//	scanf("%lf %d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//�����ַ���
//plan1���±귨
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//plan2:˫ָ��
//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//strlen�ǿ⺯��
//sizeof�ǲ�����

//strlen�Ǽ����ַ������ȣ�ֻ����ַ�������ע\0��λ��
//sizeof�Ǽ�������ռ���ڴ�Ĵ�С����λ���ֽڣ����ں��ڴ��д�ŵ���ʲô

 //*str + 1����str��ָ����ǿ�ռ��ֵ + 1��str��ֵ��û�б��ı�
//str + 1��str�ĵ�ַ + 1�����ƫ��һ���ַ�ָ��Ĵ�С��һ���ֽ�

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long sum = 0;
//	sum = (1 + n) * n / 2;
//	printf("%lld", sum);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));
//}
//#include<string.h>
//int main()
//{ 
//	char arr[] = "abcdef";
//	memset(arr+1, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}
//����ת��
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int arr[50][50] = { 0 };
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//plan1��
//	//for (j = 0; j < m; j++)//m��
//	//{
//	//	for (i = 0; i < n; i++)//n��
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//plan2��
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���Ʋ���������߶������ұ߲�0��������λ����λ�ƶ�����*2��Ч��
//a << 1 ��a��û�иı䣬�൱��a + 1
//int main()
//{
//	//int a = 4;
//	int a = -4;
//	//0000 0000 0000 0000 0000 0000 0000 0100
//	//0000 0000 0000 0000 0000 0000 0000 1000
//	int b = a << 1;
//	//1000 0000 0000 0000 0000 0000 0000 0100
//	//1111 1111 1111 1111 1111 1111 1111 1011
//	//1111 1111 1111 1111 1111 1111 1111 1100
//	//1111 1111 1111 1111 1111 1111 1111 1000 - ���ƺ�Ĳ���
//	//1111 1111 1111 1111 1111 1111 1111 0111
//	//1000 0000 0000 0000 0000 0000 0000 1000 - 8
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//���Ʋ�������
//�������ƣ��ұ߶�������߲�����λ
//�߼����ƣ��ұ߶�������߲�0
//int main()
//{
//	int a = -4;
//	int b = a >> 1;
//	//1111 1111 1111 1111 1111 1111 1111 1100
//	//1111 1111 1111 1111 1111 1111 1111 1110 - ���ƺ�Ĳ���
//	//1111 1111 1111 1111 1111 1111 1111 1101
//	//1000 0000 0000 0000 0000 0000 0000 0010 - ԭ��
//	//-2
//
//	//vs�ϲ�����������
//	return 0;
//}
//& - ��(������)λ��
int main()
{
	int a = 3;
	int b = -5;
	int c = a & b;//3
	//0000 0000 0000 0000 0000 0000 0000 0011 -  3�Ĳ���
	//1000 0000 0000 0000 0000 0000 0000 0101 - -5��ԭ��
	//1111 1111 1111 1111 1111 1111 1111 1010 - -5�ķ���
	//1111 1111 1111 1111 1111 1111 1111 1011 - -5�Ĳ���
	//

	//0000 0000 0000 0000 0000 0000 0000 0011
	//1111 1111 1111 1111 1111 1111 1111 1011
	//��λ�룺��һ��Ϊ0����Ϊ0��������Ϊ1����Ϊ1
	//0000 0000 0000 0000 0000 0000 0000 0011

	int d = a | b;//-5
	//0000 0000 0000 0000 0000 0000 0000 0011 -  3�Ĳ���
	//1111 1111 1111 1111 1111 1111 1111 1011 - -5�Ĳ���
	//��λ����һ��Ϊ1����Ϊ1��������Ϊ0����Ϊ0
	//1111 1111 1111 1111 1111 1111 1111 1011 - ����
	//1111 1111 1111 1111 1111 1111 1111 1010
	//1000 0000 0000 0000 0000 0000 0000 0101 - -5

	int e = a ^ b;//-8
	//0000 0000 0000 0000 0000 0000 0000 0011 -  3�Ĳ���
	//1111 1111 1111 1111 1111 1111 1111 1011 - -5�Ĳ���
	//��λ�����ͬΪ0������Ϊ1
	//1111 1111 1111 1111 1111 1111 1111 1000 - ����
	//1111 1111 1111 1111 1111 1111 1111 0111
	//1000 0000 0000 0000 0000 0000 0000 1000 - -8
	printf("%d %d %d", c, d, e);
	return 0;
}