#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "anduin";
//	reverse_string(arr);
//	printf("%s\n", arr);
//}
//int init(char arr[])
//{
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = init(arr);
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	//print(arr, sz);
//	//init(arr, sz);
//	print(arr, sz);
//}
void swap(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	/*int i = 0;
	for (i = 0; i < sz1; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}*/
	int i = 0;
	swap(arr1, arr2, sz1);
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}