#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);//假设我怀疑这里有问题
	}
	return 0;
}