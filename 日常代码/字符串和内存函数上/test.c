#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int main()
//{
//	char ch = 'a';//c�������ַ�����
//	"abcdef";//û���ַ�������
//	char arr1[] = "abcdef";
//	printf("%zu\n", strlen(arr1));//ͳ��\0ǰ���ַ�����
//
//	char arr2[10] = {'a','b','c','d','e','f'};//6
//	//����ȫ��ʼ��������Ԫ��Ĭ�ϳ�ʼ��Ϊ0��Ϊ\0��ascii��ֵ
//	printf("%zu\n", strlen(arr2));
//
//	char arr3[] = { 'a','b','c','d','e','f' };//���ֵ
//	//û��\0
//	printf("%zu\n", strlen(arr3));
//
//	//����������bug
//	//strlen�ķ�������Ϊsize_t
//	if (strlen("abc") - strlen("abcdef") > 0)//3 - 6 = -3ת��Ϊ�޷�����һ�����������
//	{
//		printf(">\n");//ok
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	//���������ǿת��ֱ�ӱȴ�С
//	//if ((int)strlen("abc") - (int)strlen("abcdef") > 0)
//	//if (strlen("abc") > strlen("abcdef"))
//}

//ģ��ʵ��strlen
//������
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
//int my_strlen(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//ָ�� - ָ��
//int my_strlen(const char* str)
//{
//	char* ret = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - ret;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strcpy - �ַ�������
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	//char arr2[] = { 'a','b','c' };//����
	
	//��û��\0�ͻ�һֱ�����ң���������							  
	//strcpy(arr1, arr2);
	//���\0Ҳ������ȥ�������ַ���Դ�ַ���һ��Ҫ��\0
	
	char* ret = my_strcpy(arr1, arr2);
	printf("%s\n", ret);
	return 0;

	//��Ŀ��ռ��޷����Դ�ַ���������ͻᱼ��
}

//int main()
//{
//	char arr1[20] = { 0 };
//	//char* arr1 = "hello world";//����
//	//arr1ָ����ǳ����ַ����������ǲ����޸ĵ�
//	char arr2[] = "abcdef";
//	//char arr2[] = { 'a','b','c' };//����
//	//��û��\0�ͻ�һֱ�����ң���������
//
//	strcpy(arr1, arr2);
//	//���\0Ҳ������ȥ�������ַ���Դ�ַ���һ��Ҫ��\0
//	printf("%s\n", arr1);
//	return 0;
//
//	//��Ŀ��ռ��޷����Դ�ַ���������ͻᱼ��
//}

//��ע�⣬��Ŀ��ռ�Ϊ�����ַ����Ļ�������Ҳ�ǻᱼ���ģ�����
//int main()
//{
//	char* arr1 = "hello world";	
//	//arr1ָ����ǳ����ַ����������ǲ����޸ĵ�
//	char arr2[] = "abcdef";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "anduin";
//	//��arr2׷�ӵ�arr1
//
//	strcat(arr1, arr2);//�ַ���׷��
//	printf("%s\n", arr1);
//	return 0;   
//}

//int main()
//{
//	//char arr1[20] = "hello\0XXXXXX";//����һ��
//	//���Դ�ַ�����\0һ�𿽱���arr1��
//	//����Ŀ���ַ�����Ҫ��\0��arr2��׷�ӵ�arr1�ĺ���
//	
//	//��û��\0
//	char arr1[] = { 'h','e','1','1','0' };//׷�ӾͷŲ�����
//	char arr2[] = "anduin";
//	//ǿ�����п��ܻ��н��
//	strcat(arr1, arr2);
//	printf("%s", arr1);//�Ҳ���\0������һֱ��\0��Ȼ����\0��λ��׷��
//	//��ʵ�����Ѿ������Խ����ʣ���Σ��
//	return 0;
//}

//ģ��ʵ��ʵ��strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//��Ŀ��ռ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " bit";
//
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s", ret);
//	return 0;
//	return 0;
//}

//�ַ����Լ����Լ�׷��?

//��ȫ�����ԣ�Ŀ���ַ������ҵ�\0�󣬻�ʹ��Դ�ַ�����\0�������ݽ���׷��
//Դ�ַ��������ı�׼���ҵ�\0
//����Դ�ַ�����Ŀ���ַ�����ͬ��ԭ��\0��λ�ñ����ǳ�b
//���������ַ���һ���������ҵ�\0
//Ŀ���ַ���ָ�����Ǳ�Դ�ַ�����
//�ͻ������ѭ��


//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//��Ŀ��ռ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char* ret = my_strcat(arr1, arr1);
//	printf("%s", ret);//bitbit
//	return 0;
//}

//����ʹ�ÿ⺯���ǿ��еģ������޷�֪���������ʵ�ֺʹ����
//������������ͬ��˼·��ʵ��strcat�ǲ����еģ���ֻ��һ���ο����룬��ȷ����Ψһ

//strcmp - �ַ����Ƚ�
//�ȽϵĲ����ַ������ȶ��ǱȽ��ַ����ж�Ӧλ�����ַ��Ĵ�С
//�����ͬ�Ƚ���һ�ԣ����������ֱ����ͬ������\0


//int my_strcmp(const char* e1, const char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 == *e2)
//	{
//		if (*e1 == '\0')
//			return 0;//���
//		e1++;
//		e2++;
//	}
//	//�����
//	/*if (*e1 > *e2)
//		return 1;
//	else 
//		return 0;*/
//	return *e1 - *e2;//���Ӽ��
//}

//�����ǳ��Ȳ������Ƶ��ַ�������!
//��ʹ��ʱ���ܻ��з��գ���Ϊ���ܹ涨�������ַ�����


//���������Ƶ��ַ�������

//strncpy
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	assert(dest && src);
//	char* start = dest;
//
//	while (count && (*dest++ = *src++) != '\0')//��Ȼ����\0����
//		count--;
//	if (count)//����������ȴ�С>Դ�ַ������ȵ����
//	{
//		while (--count)//���Ǵ���Ϊcount - 1�Σ���Ϊ�Ϸ�\0�Ѿ�������
//		{
//			*dest++ = '\0';
//		}
//	}
//	return(start);
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "shi";
//	size_t count = 0;
//	scanf("%u", &count);
//	char* ret = my_strncpy(arr1, arr2, count);//\0�������ַ������ݣ�ͳ�Ƶ���\0֮ǰ���ֵ��ַ�
//	//strncpy(arr1, arr2, 6);
//	printf("%s\n", ret);
//	return 0;
//}

//���Դ�ַ����ĳ���û�в������ȴ�
//��ôstrncpyȷʵ������������ȴ�С���ַ���С
//�����Ļ���\0�����

//strncat
//char* my_strncat(char* dest, char* src, size_t count)
//{
//	char* start = dest;
//	while (*dest)//��Ŀ���ַ�����\0
//	{
//		dest++;
//	}
//	while (count--)//countΪ��
//		if ((*dest++ = *src++) == 0)//�������ȴ���Դ�ַ����������в�\0��ֱ�ӷ���
//			return(start);
//
//	*dest = '\0';//׷�����û�з��أ����ֶ�����\0,��ʱ\0����++ָ������ַ���һ��λ��
//	return(start);
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "anduin";
//	size_t count = 0;
//	scanf("%zu", &count);
//	char* ret = my_strncat(arr1, arr2, count);
//	//strncat(arr1, arr2, 3);//3��Ϊ�������ַ�������ʵ���ĸ�������һ��\0
//	//����������ȴ����ַ�������
//	//��ֻ��׷���ַ��������಻�����
//
//	printf("%s\n", ret);
//	/*printf("%s\n", arr1);*/
//}

//strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdeq";
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	const char* cur = str2;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdeqabcdef0";
//	char arr2[] = "cdef";
//	char* ret = my_strstr(arr1, arr2);
//	if (NULL == ret)
//	{
//		printf("�Ҳ����Ӵ�\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}