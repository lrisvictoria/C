#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d\n", cnt);
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%d\n", x++);
//	} while (x--);
//}

//int i = 1;
//int j;
//j = i++;//��ʹ�ú�++��j = 1;i = 2

//int i = 10;
//int j = 20;
//int k = 3;
//k *= i + j;//*=�����ȼ��ͣ��ȼ���i+j���ڽ���*=

//#include<stdio.h>
//int a = 1;
//void test()
//{
//	int a = 2;//
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//ture || ()//Ϊ��
//int main()
//{
//	int /*hehe*/ a = 10;//ע�Ϳ������κ�λ��
//}

//int main()
//{
//	for (int x = 0, y = 0; (y = 123) && (x < 4); x++)
//		;
//
//	return 0;
//}
// 0 1 2 3 
//3++���4���������������˳�ѭ��

//���ж�����䣬int year=1009��*p=&year;���²�����year�е�ֵ��ֵ1010������ǣ�
//* p += 1;

//(*p)++;

//++(*p);

//*p++;

//11|10
//1011
//1010
//ֻҪ��1��1��Ϊ1��������Ϊ0��Ϊ0
//1011 - 11

//char a;int b;float c;double;
//���ʽa*b+d-c�����ͣ�

//��һ��������С������
//�Գ�����շת������Ͳ�����
//��һ��˼·
//k/a = i;
//k/b = i;
//int main()
//{
//	long long a = 0;
//	long long b = 0;
//	scanf("%lld %lld", &a, &b);
//	int i = 1;
//	// 5 7
//	//5�ܱ�5*i������7�ܱ�5*i����
//	//ѭ����ֹͣ����Ϊ��7�ܱ�5*i����
//	//����󹫱���Ϊ5*i������5Ҳ�ܱ�5*i����
//	//�����ķ����ܿ�
//	while (a * i % b != 0)//5*i%7 != 0
//	{
//		i++;
//	}
//	printf("%lld\n", a * i);
//	return 0;
//}

#include<stdio.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%[^\n]", arr);
//	char* cur = arr;
//	while (*cur != '\0')
//	{
//		char* start = cur;
//		char* end = cur;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			cur = end + 1;
//		else
//			cur = end;
//			//break;//ֱ��breakҲ����
//
//	}
//	reverse(arr, arr + strlen(arr) - 1);
//	printf("%s\n", arr);
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%[^\n]", arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	reverse(left, right);
//	char* str = arr;
//	char* start = arr;
//	while (*str != '\0')
//	{
//		while (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str - 1);
//		start = str + 1;
//		str++;
//	}
//	printf("%s\n", arr);
//}
//int main()
//{
//	char arr[1001] = { 0 };
//	scanf("%[^\n]", arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	reverse(left, right);
//	char* str = arr;
//	while (*str != '\0')
//	{
//		char* start = str;
//		while (*str != ' ' && *str != '\0')
//		{
//			str++;
//		}
//		reverse(start, str - 1);
//		//start = str + 1;
//		str+=1;
//	}
//	printf("%s\n", arr);
//}

//�ݹ�д��
void print()
{
	char arr[101] = { 0 };
	while (scanf("%s", arr) != EOF)
	{
		print();
		printf("%s ", arr);
	}
}
int main()
{
	print();
	return 0;
}