#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	//�����ַ�������ڳ�������һ�������þͲ��ܱ��޸ģ���ֻ����
//	
//	//��abcdef�����ַ������ַ�a�ĵ�ַ�ŵ�ָ�����p��
//	//֤��һ�£�������*p�����
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	//ע��abcdef�ǳ����ַ��������ܱ��ģ�����
//	*p = 'w';//���������
//	//���Լ�һ��const����
//	//const char* p = "abcdef";
//	
//	//p��ָ���������x86�Ļ�������4���ֽ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//Ҳ��ָ���һ��Ԫ��
//	//�ͳ����ַ����ǳ�����
//}

//һ��������
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";

	char arr1[] = "abcdef";
	char arr2[] = "abcdef";

	if (p1 == p2)
		printf("p1 == p2\n");
	else
		printf("p1 != p2\n");

	if (arr1 == arr2)
	{
		printf("arr1 == arr2\n");
	}
	else
	{
		printf("arr1 != arr2\n");
	}
}

