#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

//��̬�ڴ泣���Ĵ���

//��NULLָ����н����ò���
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		*p = 5;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//�Զ�̬���ٵĿռ����Խ�����
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 20; i++)//��20����Ԫ�ظ�����
//	{
//		*(p + i) = i;//����Խ��
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//�ԷǶ�̬�ڴ濪�ٵĿռ��ڴ��ͷ�

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	
//	//...
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//ʹ��free�ͷŶ�̬�ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;//p�ı���,p����ָ��̬�����ڴ����ʼλ��
// 
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//��ͬһ���ڴ����ͷ�
//int main()
//{
//	int* p = malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);//�Ѿ��ͷŹ���
//	p = NULL;
//	//...����д����
//
//	free(p);//�����Ѿ��ͷŹ���
//	return 0;
//}

//�ڴ�й©
//int* get_memory()
//{
//	int* p = (int*)malloc(40);
//	//...
//	return p;
//}
//int main()
//{
//	int* ptr = getmemory();
//	//ʹ��
//
//	//û�ͷ�
//	return 0;
//}

//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//int main()
//{
//    Test();
//    return 0;
//}

//char* GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//    //�ͷ�
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}

//char* GetMemory(void)
//{
//    char p[] = "hello world";
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//int test()
//{
//	int a = 10;
//	return a;
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hello\n");
//	printf("%d\n", *p);
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//}
//int main()
//{
//    Test();
//    return 0;
//}

void GetMemory(char** p, int num)
{
    *p = (char*)malloc(num);
}
void Test(void)
{
    char* str = NULL;
    GetMemory(&str, 100);
    strcpy(str, "hello");
    printf(str);
    free(str);
    str = NULL;
}
int main()
{
    Test();
    return 0;
}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	if (str == NULL)
//	{
//		return;
//	}
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}