#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>

//strcmp��if��������
//int my_strcmp(const char* e1, const char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 == *e2)
//	{
//		
//		e1++;
//		e2++;
//		if (*e1 == '\0')//�������������λ���Ǵ���ģ���Ϊ����ָ�붼��������
//			//��һ����ĸ���޷��ȽϿ��ܵ�һ���ַ����ͷ����ˣ�
//			return 0;//���
//	}
//	//�����
//	/*if (*e1 > *e2)
//		return 1;
//	else
//		return 0;*/
//	return *e1 - *e2;//���Ӽ��
//}
//int main()
//{
//	//char arr1[] = "bbcdef";
//	char arr2[] = "abcdea";
//	char arr1[] = " ";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf(">");
//	}
//	else if (ret < 0)
//	{
//		printf("<");
//	}
//	else
//	{
//		printf("=");
//	}
//	return 0;
//}

//strncmp��ģ��ʵ��

int my_strncmp(char* str1, char* str2, size_t count)
{
	assert(str1 && str2);
	while (!((*str1 - *str2)) && *str1 &&*str2 && --count)//�����������Ҳ�Ϊ'\0',����ֻ�ܱȽ��ַ���str1��str2��ǰmaxlen���ַ�
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abcq";
	int ret = my_strncmp(arr1, arr2, 2);

	if (ret > 0)
	{
		printf("arr1 > arr2");
	}
	else if (ret < 0)
	{
		printf("arr1 < arr2");
	}
	else
	{
		printf("arr1 = arr2");
	}
	return 0;
}
