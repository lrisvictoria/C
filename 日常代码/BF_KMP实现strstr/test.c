#define _CRT_SECURE_NO_WARNINGS 1 
/*
BF - 暴力算法
str：主串
sub：子串
*/

//BF原始写法
#include <stdio.h>
#include <assert.h>
/*
int BF(const char* str, const char* sub)
{
	assert(str && sub);
	if (str == NULL || sub == NULL)
	{
		return -1;
	}

	int i = 0;
	int j = 0;
	int lenStr = strlen(str);
	int lenSub = strlen(sub);

	while (i < lenStr && j < lenSub)
	{
		if (str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}

	if (j >= lenSub)
	{
		return i - j;
	}
	return -1;
}

int main()
{
	printf("%d\n", BF("abcdacbecbsi", "acb"));
	return 0;
}
*/

//strstr原始写法 - 实际上也是BF的思路
//char* my_strstr(const char* str, const char* sub)
//{
//	assert(str && sub);
//	const char* pos1 = str;
//	const char* pos2 = sub;
//	const char* cur = str;
//	if (*sub == '\0')
//	{
//		return NULL;
//	}
//	while (*cur)
//	{
//		pos1 = cur;
//		pos2 = sub;
//		while (*pos1 && *pos2 && !(*pos1 - *pos2))
//		{
//			pos1++;
//			pos2++;
//		}
//		if(*pos2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdeqabcdef0";
//	char arr2[] = "cdef";
//	char* ret = my_strstr(arr1, arr2);
//	if (NULL == ret)
//	{
//		printf("找不到子串\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//KMP算法
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

void GetNextVal(int* next, const char* sub)
{
	assert(sub);
	int lenNext = strlen(sub);//next数组长度和sub相同
	int i = 2;
	for (; i < lenNext; i++)
	{
		if(sub[i] == sub[])
	}
	
}
void GetNext(int* next, const char* sub)
{
	assert(next && sub);
	int lenSub = strlen(sub);

	next[0] = -1;
	next[1] = 0;

	int i = 2;//从2开始
	int k = 0;
	while (i < lenSub)
	{
		if (k == -1 || sub[i - 1] == sub[k])
		{
			next[i] = k + 1;
			i++;
			k++;
		}
		else
		{
			k = next[k];
		}
	}
	GetNextVal(next, sub);
}
int KMP(const char* str, const char* sub, int pos)
{
	assert(str && sub);
	if (str == NULL || sub == NULL) return -1;
	int lenStr = strlen(str);
	int lenSub = strlen(sub);
	if (lenStr == 0 || lenSub == 0) return -1;
	if (pos < 0 || pos >= lenStr) return -1;

	int i = pos;//遍历主串
	int j = 0;//遍历子串

	int* next = (int*)malloc(lenSub * sizeof(int));//和子串一样长
	assert(next != NULL);

	GetNext(next, sub);

	while (i < lenStr && j < lenSub)
	{
		if (j == -1 || str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j >= lenSub)
	{
		return i - j;
	}
	return -1;
}

int main()
{
	printf("%d\n", KMP("abcdacbecbsi", "acb", 0));
	return 0;
}