#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>
#include <stdlib.h>

// 一个结构体中最后一个成员是数组，这个数组没有大小
// 称为柔型数组
// 柔性数组的特点：
// 结构中的柔性数组成员前面必须包含一个其他成员
// sizeof返回的结构大小不包括柔性数组的内存
// malloc进行动态分配，分配的内存大于结构的大小，以适应柔性数组的预期大小

struct S
{
	int n;
	float s;
	int arr[0];// 柔性数组成员
			   // int arr[];// 也可以
};

int main()
{
	//printf("%zu\n", sizeof(struct S));// 不包括柔性数组的大小
	//struct S s;
	struct S* ps = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);// sizeof(int) * 4是留给柔性数组的
	if (ps == NULL)
	{
		return 1;
	}
	//...
	ps->n = 100;
	ps->s = 5.5f;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &(ps->arr[i]));
	}

	printf("%d %f\n", ps->n, ps->s);

	for (i = 0; i < 4; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	// 调整
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + sizeof(int) * 10);
	if (ptr == NULL)
	{
		return 1;
	}
	else
	{
		ps = ptr;
		ptr = NULL;
	}
	// 释放
	free(ps);
	ps = NULL;
	return 0;
}

// 一定要柔性数组吗？不可以用其他方式吗？
//struct S
//{
//	int n;
//	float s;
//	int* arr;// 动态开辟
//};
//
//int main()
//{
//	// 柔性数组数据全放在堆上
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//
//	ps->n = 100;
//	ps->s = 5.5f;
//	int* ptr = (int*)malloc(sizeof(int) * 4);
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		ps->arr = ptr;
//	}
//	// 使用...
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//
//	// 调整
//	int* pptr = (int*)ralloc(ps->arr, 10 * sizeof(int));
//	if (pptr == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		ps->arr = pptr;
//	}
//	// 释放
//	// 一定要先释放ps->arr
//	// 否则释放ps后，ps为野指针
//	// 再释放ps->arr会有错误
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;// 至少一个其他成员
//	float s;
//	int arr[0];// 柔性数组成员
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}