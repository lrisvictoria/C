#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;//�ڴ濪�ٿռ䣬�ĸ��ֽ�
//	int* p = &a;//ȡ��ַ���浽����ָ�����p�У����Ϊ��һ���ֽڵĵ�ַ
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%zu", sizeof(pa));
//	printf("%zu", sizeof(pc));
//}
//ָ�����ͶԽ����õ�Ӱ��
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;//�ܷ��£�
//	*pa = 0;//ָ�����;����ˣ�ָ�������ڱ�������ʱ�����ʵ�Ȩ��
//	//����ָ������÷����ĸ��ֽڣ��ַ�ָ������÷���һ���ֽ�
//	return 0;
//}
// ָ�����ͶԽ����õ�Ӱ��
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//�ܷ��£�
//	*pa = 0;//ָ�����;����ˣ�ָ�������ڱ�������ʱ�����ʵ�Ȩ��
//	//����ָ������÷����ĸ��ֽڣ��ַ�ָ������÷���һ���ֽ�
//	return 0;
//}
//ָ�����;���ָ����ǰ������ߵľ���
//ָ�����;����˿����ڴ���ӽ�
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa+1);//1*sizeof(int)
//	printf("%p\n", pc+1);//1*sizeof(char)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//������ϣ�����������40���ֽ�ʱ������1���ֽ�Ϊ��λ����
//	//
//	//char* pa = (char*)arr;//int*
//	//int i = 0;
//	//for (i = 0; i < 40; i++)
//	//{
//	//	*pa = 'x';
//	//	pa++;
//	//}
//	//��һ�����εķ�ʽ���з���
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0x11223344;
//		p++;
//	}
//}
//int main()
//{
//	float  n = 3.14;
//	int b = n;
//	printf("%d\n", n);
//}
//int main()
//{
//	int* p;
//	//δ��ʼ��Ϊ���ֵ
//	//�����ռ䣬����ָ��Ŀռ䲻���ڸñ���
//	//�Ƿ�����
//	*p = 20;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	printf("%d\n", a);//�β�
//	return &a;
//}
//int main()
//{
//	int* p = test();//���յ�ַ����ʱ�����ں���������֮��
//	//�ñ��������٣��ռ䱻�ͷţ������˱��ͷŵĿռ䣬�Ƿ�����
//	*p = 100;
//	return 0;
//}
//int main()
//{
//	int* q = NULL;//0ָ���޷�������
//	//Ұָ�� <==> Ұ��
//	if (q != NULL)
//	{
//		 
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);
//	//ǰ�᣺����ָ�����ָ��ͬһ��ռ�
//	//ָ�� - ָ��ľ���ֵ�ȵõ�����ָ���ָ��֮��Ԫ�صĸ���
//}
//my_strlen
//ָ�� - ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "anduin";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//ָ�������
//��sizeof(������)��ʾ�������飬���������������Ĵ�С
//&�����������������飬ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}
//�����ָ�벻��һ����
//������һ�������Ŀռ�
//ָ���Ǵ�ŵ�ַ�ı���
//����ͨ��ָ������������
//�������൱��ָ�볣��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����(һ��ָ��)
//	int** ppa = &pa;//ppa��һ������ָ��
//	int*** pppa = &ppa;//pppa��һ������ָ��
//	return 0;
//}
//ָ������ - ���ָ�������
//int main()
//{
//	//int arr1[5];//�������� - ������ζ�����
//	//char ch[6];//�ַ����� - ����ַ�������
//
//	int a = 10;
//	int b = 11;
//	int c = 12;
//	int d = 13;
//	int e = 14;
//	int* arr2[5] = { &a,&b,&c,&d,&e };//ָ������
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}
int main()
{
	int data1[5] = { 1,2,3,4,5 };
	int data2[5] = { 2,3,4,5,6 };
	int data3[5] = { 3,4,5,6,7 };
	int* arr[3] = { data1, data2, data3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//printf("%d ", arr[i][j]);
			printf("%d ", *(arr[i] + j));
		}
		printf("\n");
	}
}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}