#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <assert.h>

//strcmp的if放置问题
//int my_strcmp(const char* e1, const char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 == *e2)
//	{
//		
//		e1++;
//		e2++;
//		if (*e1 == '\0')//将该语句放在这个位置是错误的，因为两个指针都自增过了
//			//第一个字母就无法比较可能第一个字符串就返回了，
//			return 0;//相等
//	}
//	//不相等
//	/*if (*e1 > *e2)
//		return 1;
//	else
//		return 0;*/
//	return *e1 - *e2;//更加简洁
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

//strncmp的模拟实现

int my_strncmp(char* str1, char* str2, size_t count)
{
	assert(str1 && str2);
	while (!((*str1 - *str2)) && *str1 && *str2 && --count)
	//如果两者相等且不为'\0',并且只操作count个数，
	//这里需要前置--，如果使用后置--，那么还会多进入一次循环，导致count多执行一次
	//前置--，无需进行特殊处理，当前情况直接返回即可
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;//无论是\0还是其他情况都能处理
}
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "abcq";
	int ret = my_strncmp(arr1, arr2, 4);

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
