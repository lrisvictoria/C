#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <limits.h>
#include <stdlib.h> 

//动态内存常见的错误

//对NULL指针进行解引用操作
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

//对动态开辟的空间进行越界访问
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 20; i++)//把20当做元素个数了
//	{
//		*(p + i) = i;//严重越界
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//对非动态内存开辟的空间内存释放

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

//使用free释放动态内存的一部分
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
//		p++;//p改变了,p不再指向动态开辟内存的起始位置
// 
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//对同一块内存多次释放
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
//	free(p);//已经释放过了
//	p = NULL;
//	//...继续写代码
//
//	free(p);//忘记已经释放过了
//	return 0;
//}

//内存泄漏
//int* get_memory()
//{
//	int* p = (int*)malloc(40);
//	//...
//	return p;
//}
//int main()
//{
//	int* ptr = getmemory();
//	//使用
//
//	//没释放
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
//    //释放
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