#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>
//int my_memcmp(const void* e1, const void* e2, size_t count)
//{
//	assert(e1 && e2);
//	while (count--)
//	{
//		if (*((char*)e1) == *((char*)e2))
//		{
//			e1 = (char*)e1 + 1;
//			e2 = (char*)e2 + 1;
//		}
//		else
//		{
//			return *(char*)e1 - *(char*)e2;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,6 };
//
//	int ret = my_memcmp(arr1, arr2, 16);
//
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret < 0)
//	{
//		printf("arr1 < arr2");
//	}
//	else
//	{
//		printf("arr1 = arr2");
//	}
//	return 0;
//}

//strtok
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello@liuxuan@hello";
//	char buf[200] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = "@";
//	char* str = NULL;
//	//char* str = strtok(buf, p);
//
//	
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	
//	return 0;
//}

//strerror

//errno - c语言库函数报错的时候的错误码
//库函数调用失败之后就会把错误码记录到errno中
//是c语言自带的全局变量
//返回错误信息的首字符地址
//错误码会被实时更新

//#include <stdio.h>
//#include <limits.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		perror("Malloc");//Malloc: Not enough space，通过提示信息加上分号，打印出错误信息
//		perror("");//不加提示信息，但是函数的参数有规定，不能什么都不串，起码也得是个空字符串
//		return 1;//打印结束直接返回，1表示异常返回
//		//打印的依然是errno变量中的错误码对应的错误信息
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "Are you ok?";
//	char* p = arr;
//	while (*p)
//	{
//		if (islower(*p))
//		{
//			*p = toupper(*p);//如果本身是大写或者其他字符，是不会转换的
//		}
//		p++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//设定元素
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//          1
//         1 1
//        1 2 1
//       1 3 3 1
//      1 4 6 4 1
//     1 5 10 10 5 1
//    1 6 15 20 15 6 1
//   1 7 21 35 35 21 7 1
//  1 8 28 56 70 56 28 8 1
//1 9 36 84 126 126 84 36 9 1


int main()
{
	char ch1 = '1';
	char ch2 = 'A';
	char ch3 = 'a';
	
	printf("%c\n", toupper(ch1));
	printf("%c\n", toupper(ch2));
	printf("%c\n", toupper(ch3));

	return 0;
}